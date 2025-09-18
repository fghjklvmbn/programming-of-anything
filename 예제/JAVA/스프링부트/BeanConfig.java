import com.example.test.*;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Description;

public class BeanTest {
    public void init(){ } // 초기화
    public void destroy(){ } // 소멸
}

public interface BeanInterface {
    void execute();
}

public class BeanImplement implements BeanInterface {
    @Override
    public void execute() {
        System.out.println("BeanImplement execute method called");
    }
}

@Configuration
public class BeanConfig {
    // Bean 등록
    @Bean(initMethod = "init", destroyMethod = "destroy")
    @Description("BeanTest Bean")
    
    // 빈 객체 생성 <- 의존성 주입(다른클래스에서 끌어오기)
    public BeanTest sampleBean(){
        return new SampleBean();
    }

    // 인터페이스 타입으로 빈 등록
    @Bean
    public BeanInterface beanInterface(){
        return new BeanInterface();
    }
}