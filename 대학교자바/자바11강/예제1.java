package 대학교자바.자바11강;
import javax.swing.*;

class MyFrame extends JFrame {
	MyFrame() {
		setTitle("300x300 스윙 프레임 만들기");
		setSize(300,300);
		setVisible(true);
	}
}

public class 예제1 {
	public static void main(String [] args) {
		MyFrame mf=new MyFrame();
	}

}
