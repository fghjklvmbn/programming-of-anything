package com.example.test;

import java.io.Serial;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Bean;
import org.springframework.stereotype.Controller;

public class name {

    @Service(value="cartService")
    @Bean
    public cartService cartService() {
        cartService service = new cartService();
        service.setCartService(cartRepo());
        return service;
    }

    // 컨트롤러에 autowired를 이용하여 주입(2번째)
    @Controller
    public class CartController {
        @Autowired
        private cartService cartService;
    }
}
