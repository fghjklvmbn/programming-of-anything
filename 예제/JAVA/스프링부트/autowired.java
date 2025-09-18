package com.example.test;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Primary;
import org.springframework.stereotype.Component;

@Component
public class autowired {
    private cartService repository;
    private aRepo arepo;
    private brepo brepo;
    private crepo crepo;

    @Autowired
    private AnyBean anyBean;

    @Autowired
    public cartService(cartService repository){
        this.repository = repository;
    }

    @Autowired
    public void setArepo(aRepo arepo) {
        this.arepo = arepo;   
    }

    @Autowired
    public void setBrepo(brepo brepo) {
        this.brepo = brepo;
    }

    // 설정 기반 오토 와이어링
    @Autowired
    public void setCrepo(crepo crepo) {
        this.crepo = crepo;
    }

    // 메소드 기반 오토 와이어링
    @Autowired
    public void xMethod(brepo brepo, crepo crepo) {
        this.brepo = brepo;
        this.crepo = crepo;
    }
}
