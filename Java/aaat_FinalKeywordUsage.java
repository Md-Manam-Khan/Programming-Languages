public class aaat_FinalKeywordUsage
{
    public static void main(String[] args)
    {
        final int maxMarks = 100;
        System.out.println("Max marks: " + maxMarks);
        Circle c1;
        c1 = new Circle(7);
        System.out.println("Area: " + c1.area());
    }
}
class Circle
{
    final double pi = 3.1416;
    int radius;
    Circle(int radius)
    {
        this.radius = radius;
    }
    double area()
    {
        return (pi * radius * radius);
    }
}