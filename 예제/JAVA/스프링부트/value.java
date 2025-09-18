@Configuration
public class value {
    // 우선 사용
    @Bean
    @Primary
    public cartService cartService1() {
        return new cartService();
    }

    // 나중에 사용
    @Bean
    public cartService cartService2() {
        return new cartService();
    }
}

@Controller
public class CartController {
    @Autowired
    private cartService cartService; // Primary로 지정된 cartService1이 주입됨
}