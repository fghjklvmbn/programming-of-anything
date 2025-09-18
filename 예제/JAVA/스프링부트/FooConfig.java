package com.example.test;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Import;

@Configuration
public class FooConfig {
    // FooBean 빈 등록
    @Bean
    public FooBean fooBean() {
        return new FooBean();
    }
}

// AppConfig.java에서 FooConfig를 import
@Configuration
@Import(FooConfig.class)
