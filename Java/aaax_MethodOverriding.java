public class aaax_MethodOverriding
{
    public static void main(String[] args)
    {
        Shape s1;
        Shape s2;
        s1 = new Shape();
        s2 = new Square(5);
        s1.area();
        s2.area();
    }
}
class Shape
{
    void area()
    {
        System.out.println("Area of shape is not defined");
    }
}
class Square extends Shape
{
    int side;
    Square(int side)
    {
        this.side = side;
    }
    void area()
    {
        System.out.println("Area of square: " + (side * side));
    }
}