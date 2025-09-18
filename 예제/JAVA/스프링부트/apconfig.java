package com.example.test;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;


// 의존성 주입 설정 클래스
@Configuration
public class apconfig {
    @Bean
    public CarRepository carRepository() {
        return new CarRepository();
    }

    @Bean
    public cartService cartService() {
        cartService service = new cartService();
        service.setCarRepository(carRepository());
        return service;
    }
}
