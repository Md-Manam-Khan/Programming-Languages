public class aaap_ConstructorOverloading
{
    public static void main(String[] args)
    {
        Rectangle r1;
        Rectangle r2;
        Rectangle r3;
        r1 = new Rectangle();
        r2 = new Rectangle(5);
        r3 = new Rectangle(5, 10);
        System.out.println("Area of r1: " + r1.area());
        System.out.println("Area of r2: " + r2.area());
        System.out.println("Area of r3: " + r3.area());
    }
}
class Rectangle
{
    int length, width;
    Rectangle()
    {
        length = 1;
        width = 1;
    }
    Rectangle(int side)
    {
        length = side;
        width = side;
    }
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int area()
    {
        return (length * width);
    }
}