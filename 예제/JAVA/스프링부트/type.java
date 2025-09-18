package com.example.test;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.stereotype.Controller;

@Configuration
public class type {
    // cartRepo 인터페이스의 구현체를 빈으로 등록
    @Bean
    public cartRepo cartRepo() {
        return new cartRepoImpl();
    }

    // Setter 메서드를 통해 cartRepo를 cartService에 주입
    @Bean
    public cartService cartService() {
        cartService service = new cartService();
        service.setCartService(cartRepo());
        return service;
    }

    // 컨트롤러에 autowired를 이용하여 주입
    @Controller
    public class CartController {
        @Autowired
        private cartService cartService;
    }
}