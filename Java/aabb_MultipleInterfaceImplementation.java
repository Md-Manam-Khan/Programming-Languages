public class aabb_MultipleInterfaceImplementation
{
    public static void main(String[] args)
    {
        SmartPhone s1;
        s1 = new SmartPhone();
        s1.call();
        s1.capture();
    }
}
interface Callable
{
    void call();
}
interface Camera
{
    void capture();
}
class SmartPhone implements Callable, Camera
{
    public void call()
    {
        System.out.println("Making a call");
    }
    public void capture()
    {
        System.out.println("Capturing a photo");
    }
}