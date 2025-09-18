package com.example.test;

import org.springframework.context.annotation.Bean;

public class APCON {

    @Bean
    public CartRepository cartRepository() {
        return new CartRepository();
    }

    // 생성자로 카트서비스에 주입
    @Bean
    public cartService cartService() {
        return new cartService();
    }
}
