public class aabv_GenericsBasics
{
    public static void main(String[] args)
    {
        Box<Integer> intBox;
        Box<String> strBox;
        intBox = new Box<Integer>(100);
        strBox = new Box<String>("Hello");
        System.out.println("Integer box: " + intBox.getValue());
        System.out.println("String box: " + strBox.getValue());
    }
}
class Box<T>
{
    private T value;
    Box(T value)
    {
        this.value = value;
    }
    T getValue()
    {
        return value;
    }
}