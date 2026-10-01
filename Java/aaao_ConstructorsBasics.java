public class aaao_ConstructorsBasics
{
    public static void main(String[] args)
    {
        Book b1;
        Book b2;
        b1 = new Book();
        b2 = new Book("The Alchemist", 197);
        b1.display();
        b2.display();
    }
}
class Book
{
    String title;
    int pages;
    Book()
    {
        title = "Untitled";
        pages = 0;
    }
    Book(String t, int p)
    {
        title = t;
        pages = p;
    }
    void display()
    {
        System.out.println("Title: " + title);
        System.out.println("Pages: " + pages);
    }
}