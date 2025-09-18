package com.example.test;

public class cartService {
    // (DI) CartRepository 주입
    private CartRepository repository;
    public cartService(){
        this.repository = new CartRepository();
    }
}
