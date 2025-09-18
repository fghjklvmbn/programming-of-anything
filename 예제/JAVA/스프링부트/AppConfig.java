import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Scope;
import org.springframework.web.context.annotation.ApplicationScope;
import org.springframework.web.context.annotation.SessionScope;

@Configuration
public class AppConfig {

    // 싱글톤 빈 등록
    @Bean
    public SingletonBean singletonBean() {
        return new SingletonBean();
    }
    
    // 프로토타입 빈 등록
    // 스코프로 미리 정의된 상수 사용
    @Bean
    @Scope(Configuration.SCOPE_PROTOTYPE)
    public PrototypeBean prototypeBean() {
        return new PrototypeBean();
    }

    // request 스코프 빈 등록
    // 웹 인식 컨텍스트가 인스턴스화 될때 HTTP요청이 없어서
    // 오류가 발생할 수 있으므로 proxyMode를 설정
    // HTTP요청이 있을때 프록시로 의존성을 주입하고 bean을 인스턴스화

    @Bean
    @Scope(value=WebApplicationContext.SCOPE_REQUEST,
    proxyMode=ScopedProxyMode.TARGET_CLASS)
    public RequestBean requestBean() {
        return new RequestBean();
    }

    // session 스코프 빈 등록
    @SessionScope
    public SessionBean sessionBean() {
        return new SessionBean();
    }

    // Application 스코프 빈 등록
    @ApplicationScope
    public ApplicationBean applicationBean() {
        return new ApplicationBean();
    }


    // 웹소켓 스코프 빈 등록
    @Scope(scopeName=="websocket", proxyMode=ScopedProxyMode.TARGET_CLASS)
    public ReqScopedBean reqScopedBean() {
        return new ReqScopedBean();
    }
}