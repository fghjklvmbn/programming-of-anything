package 대학교자바.자바테스트공간.util;

import 대학교자바.자바테스트공간.AccessTest;

public class PublicExample {
    PublicExample(){
        AccessTest at = new AccessTest();
        at.a = 100;
        System.out.println(at.a);
    }
}
