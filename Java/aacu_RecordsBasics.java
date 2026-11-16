public class aacu_RecordsBasics
{
    public static void main(String[] args)
    {
        Point p1;
        Point p2;
        Point p3;
        p1 = new Point(3, 4);
        p2 = new Point(3, 4);
        p3 = new Point(5, 6);
        System.out.println(p1);
        System.out.println("x: " + p1.x() + ", y: " + p1.y());
        System.out.println("p1 equals p2: " + p1.equals(p2));
        System.out.println("p1 equals p3: " + p1.equals(p3));
        System.out.println("Same hashCode: " + (p1.hashCode() == p2.hashCode()));
        System.out.println("Distance from origin: " + p1.distance());
        System.out.println("Origin: " + Point.origin());
        Student s1;
        s1 = new Student("Manam", 6);
        System.out.println(s1);
        System.out.println(s1.label());
        try
        {
            Student bad;
            bad = new Student("Nobody", 0);
        }
        catch (IllegalArgumentException e)
        {
            System.out.println("Caught: " + e.getMessage());
        }
    }
}
record Point(int x, int y)
{
    double distance()
    {
        return Math.sqrt((x * x) + (y * y));
    }
    static Point origin()
    {
        return new Point(0, 0);
    }
}
record Student(String name, int semester)
{
    Student
    {
        if (semester < 1)
        {
            throw new IllegalArgumentException("Semester must be at least 1");
        }
    }
    String label()
    {
        return name + " (semester " + semester + ")";
    }
}
