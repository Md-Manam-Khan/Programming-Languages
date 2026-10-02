public class aabd_NestedAndInnerClasses
{
    public static void main(String[] args)
    {
        Outer o1;
        Outer.Inner i1;
        o1 = new Outer();
        i1 = o1.new Inner();
        i1.show();
    }
}
class Outer
{
    int value = 10;
    class Inner
    {
        void show()
        {
            System.out.println("Value from outer class: " + value);
        }
    }
}