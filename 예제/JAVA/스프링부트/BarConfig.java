package com.example.test;

import org.springframework.context.annotation.Bean;

public class BarConfig {
    @Bean
    public BarBean barBean() {
        return new BarBean();
    }
}
