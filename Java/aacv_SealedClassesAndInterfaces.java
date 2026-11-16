public class aacv_SealedClassesAndInterfaces
{
    public static void main(String[] args)
    {
        Shape c;
        Shape r;
        Shape t;
        c = new Circle(5);
        r = new Rectangle(4, 6);
        t = new Triangle(3, 8);
        printArea(c);
        printArea(r);
        printArea(t);
        Vehicle v;
        v = new Car("Toyota");
        System.out.println(v.name());
        v = new Bike("Yamaha");
        System.out.println(v.name());
    }
    static void printArea(Shape s)
    {
        if (s instanceof Circle c)
        {
            System.out.println("Circle area: " + (3.14 * c.radius() * c.radius()));
        }
        else if (s instanceof Rectangle r)
        {
            System.out.println("Rectangle area: " + (r.width() * r.height()));
        }
        else if (s instanceof Triangle t)
        {
            System.out.println("Triangle area: " + (0.5 * t.base() * t.height()));
        }
    }
}
sealed interface Shape permits Circle, Rectangle, Triangle
{
}
record Circle(double radius) implements Shape
{
}
record Rectangle(double width, double height) implements Shape
{
}
record Triangle(double base, double height) implements Shape
{
}
sealed abstract class Vehicle permits Car, Bike
{
    String name;
    Vehicle(String name)
    {
        this.name = name;
    }
    abstract String name();
}
final class Car extends Vehicle
{
    Car(String name)
    {
        super(name);
    }
    String name()
    {
        return "Car: " + name;
    }
}
non-sealed class Bike extends Vehicle
{
    Bike(String name)
    {
        super(name);
    }
    String name()
    {
        return "Bike: " + name;
    }
}
