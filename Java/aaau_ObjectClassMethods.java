public class aaau_ObjectClassMethods
{
    public static void main(String[] args)
    {
        Point p1;
        Point p2;
        p1 = new Point(3, 4);
        p2 = new Point(3, 4);
        System.out.println("p1: " + p1.toString());
        System.out.println("p2: " + p2.toString());
        System.out.println("p1 equals p2: " + p1.equals(p2));
        System.out.println("p1 hashCode: " + p1.hashCode());
        System.out.println("p2 hashCode: " + p2.hashCode());
    }
}
class Point
{
    int x, y;
    Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
    public String toString()
    {
        return ("(" + x + ", " + y + ")");
    }
    public boolean equals(Object obj)
    {
        Point other;
        other = (Point) obj;
        return ((this.x == other.x) && (this.y == other.y));
    }
    public int hashCode()
    {
        return ((x * 31) + y);
    }
}