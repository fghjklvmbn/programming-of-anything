public class aspect {
    long start = System.currentTimeMillis();

    // 비즈니스 로직 수행
    long end = System.currentTimeMillis() - start;
    System.out.println("실행 시간: " + end + "ms");
}
