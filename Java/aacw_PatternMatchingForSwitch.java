public class aacw_PatternMatchingForSwitch
{
    public static void main(String[] args)
    {
        System.out.println(describe("Manam"));
        System.out.println(describe(5));
        System.out.println(describe(500));
        System.out.println(describe(2.5));
        System.out.println(describe(true));
        System.out.println(describe(null));
        Animal a1;
        Animal a2;
        a1 = new Dog("Rex");
        a2 = new Cat("Tom", 9);
        System.out.println(sound(a1));
        System.out.println(sound(a2));
        System.out.println(area(new Circle(2)));
        System.out.println(area(new Rectangle(3, 5)));
        Pair p;
        p = new Pair(10, 20);
        if (p instanceof Pair(int x, int y))
        {
            System.out.println("Sum of pair: " + (x + y));
        }
    }
    static String describe(Object o)
    {
        return switch (o)
        {
            case null -> "It is null";
            case String s -> "String of length " + s.length();
            case Integer i when i > 100 -> "Large integer " + i;
            case Integer i -> "Small integer " + i;
            case Double d -> "Double " + d;
            default -> "Something else: " + o;
        };
    }
    static String sound(Animal a)
    {
        return switch (a)
        {
            case Dog d -> d.name() + " says Woof";
            case Cat c -> c.name() + " says Meow with " + c.lives() + " lives";
        };
    }
    static double area(Shape s)
    {
        return switch (s)
        {
            case Circle c -> 3.14 * c.radius() * c.radius();
            case Rectangle r -> r.width() * r.height();
        };
    }
}
sealed interface Animal permits Dog, Cat
{
}
record Dog(String name) implements Animal
{
}
record Cat(String name, int lives) implements Animal
{
}
sealed interface Shape permits Circle, Rectangle
{
}
record Circle(double radius) implements Shape
{
}
record Rectangle(double width, double height) implements Shape
{
}
record Pair(int x, int y)
{
}
