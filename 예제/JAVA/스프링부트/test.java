package com.example.test;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

public class test {
    public static void main(String[] args) {
        ApplicationContext appContext = new AnnotationConfigApplicationContext(BarConfig.class);
        FooBean fooBean = appContext.getBean(FooBean.class);
        BarBean barBean = appContext.getBean(BarBean.class);
    }
}
