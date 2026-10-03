import java.util.*;
public class aabm_ArrayListBasics
{
    public static void main(String[] args)
    {
        ArrayList<String> list;
        list = new ArrayList<String>();
        list.add("Mango");
        list.add("Banana");
        list.add("Apple");
        System.out.println("List: " + list);
        list.remove("Banana");
        System.out.println("After removal: " + list);
        System.out.println("Size: " + list.size());
        System.out.println("First element: " + list.get(0));
    }
}