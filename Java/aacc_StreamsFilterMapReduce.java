import java.util.*;
import java.util.stream.*;
public class aacc_StreamsFilterMapReduce
{
    public static void main(String[] args)
    {
        ArrayList<Integer> numbers;
        numbers = new ArrayList<Integer>();
        numbers.add(1);
        numbers.add(2);
        numbers.add(3);
        numbers.add(4);
        numbers.add(5);
        List<Integer> evens;
        evens = numbers.stream().filter(n -> ((n % 2) == 0)).collect(Collectors.toList());
        System.out.println("Evens: " + evens);
        List<Integer> squares;
        squares = numbers.stream().map(n -> (n * n)).collect(Collectors.toList());
        System.out.println("Squares: " + squares);
        int sum;
        sum = numbers.stream().reduce(0, (a, b) -> (a + b));
        System.out.println("Sum: " + sum);
    }
}