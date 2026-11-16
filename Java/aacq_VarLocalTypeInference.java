import java.util.*;
public class aacq_VarLocalTypeInference
{
    public static void main(String[] args)
    {
        var name = "Manam";
        var age = 25;
        var gpa = 3.75;
        var active = true;
        System.out.println(name + " " + age + " " + gpa + " " + active);
        var numbers = new ArrayList<Integer>();
        numbers.add(10);
        numbers.add(20);
        numbers.add(30);
        for (var n : numbers)
        {
            System.out.println("Number: " + n);
        }
        var ages = new HashMap<String, Integer>();
        ages.put("Rafi", 21);
        ages.put("Tanvir", 22);
        for (var entry : ages.entrySet())
        {
            System.out.println(entry.getKey() + " -> " + entry.getValue());
        }
        for (var i = 0; i < 3; i++)
        {
            System.out.println("Index: " + i);
        }
        var total = 0;
        for (var n : numbers)
        {
            total += n;
        }
        System.out.println("Total: " + total);
        System.out.println("Type of name: " + ((Object) name).getClass().getSimpleName());
        System.out.println("Type of age: " + ((Object) age).getClass().getSimpleName());
        System.out.println("Type of numbers: " + numbers.getClass().getSimpleName());
    }
}
