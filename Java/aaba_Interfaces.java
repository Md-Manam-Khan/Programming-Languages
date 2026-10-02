public class aaba_Interfaces
{
    public static void main(String[] args)
    {
        Drawable d1;
        d1 = new Triangle();
        d1.draw();
    }
}
interface Drawable
{
    void draw();
}
class Triangle implements Drawable
{
    public void draw()
    {
        System.out.println("Drawing a triangle");
    }
}