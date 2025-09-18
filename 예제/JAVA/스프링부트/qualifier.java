package com.example.test;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.context.annotation.Bean;
import org.springframework.stereotype.Component;
import org.springframework.stereotype.Controller;

public class qualifier {
    @Bean
    public cartService cartService1() {

    }

    @Bean
    public cartService cartService2() {
        
    }

    @Controller
    public class CartController {
        
        // 카트서비스에서 2개의 빈이 등록되어 있을 때 @Qualifier("빈 이름")를 이용하여 특정 빈을 주입 가능
        @Qualifier("cartService1")
        @Autowired
        private cartService Service1;

        @Qualifier("cartService2")
        @Autowired
        private cartService cartService2;
    }

}
