
import com.example.test.cartService;
import java.beans.BeanProperty;

@Configuration
public class Primary {
    @Bean
    @Primary
    public cartService cartService1() {
        return new cartService();
    }

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
