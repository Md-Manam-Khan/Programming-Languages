import java.util.*;
import java.util.stream.*;
public class aacb_StreamsBasics
{
    public static void main(String[] args)
    {
        ArrayList<Integer> numbers;
        numbers = new ArrayList<Integer>();
        numbers.add(10);
        numbers.add(20);
        numbers.add(30);
        long count;
        count = numbers.stream().count();
        System.out.println("Count: " + count);
        numbers.stream().forEach(System.out::println);
        List<Integer> sorted;
        sorted = numbers.stream().sorted().collect(Collectors.toList());
        System.out.println("Sorted: " + sorted);
    }
}