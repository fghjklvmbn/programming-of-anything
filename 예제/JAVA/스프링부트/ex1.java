import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.DependsOn;

import com.example.test.*;

@Configuration
public class FooConfig {
    // FooBean 빈 등록
    @Bean
    public FooBean fooBean() {
        return new FooBean();
    }

    @Bean
    public BarBean barBean() {
        return new BarBean();
    }

    // BazBean은 FooBean과 BarBean에 의존
    // 이떄 FooBean과 BarBean순으로 초기화 된다.
    @Bean
    @DependsOn({"FooBean", "BarBean"})
    public BazBean bazBean() {
        return new BazBean();
    }
}