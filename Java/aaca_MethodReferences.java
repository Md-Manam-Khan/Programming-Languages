import java.util.*;
import java.util.function.*;
public class aaca_MethodReferences
{
    public static void main(String[] args)
    {
        ArrayList<String> names;
        names = new ArrayList<String>();
        names.add("Rafi");
        names.add("Tanvir");
        names.add("Nabila");
        names.forEach(System.out::println);
        Function<String, Integer> length;
        length = String::length;
        System.out.println("Length of Manam: " + length.apply("Manam"));
    }
}