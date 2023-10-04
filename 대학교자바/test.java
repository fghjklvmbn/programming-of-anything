package 대학교자바;

class book1 {
    String title, author;
    public book1(String title, String author){
        this.title = title;
        this.author = author;
    }
}

public class test{
    public static void main(String []args){
        book1 b = new book1("김구", "김구");
        System.out.println(b.author);
    }
}