import java.util.function.*;
public class aabz_FunctionalInterfaces
{
    public static void main(String[] args)
    {
        Predicate<Integer> isEven;
        isEven = n -> ((n % 2) == 0);
        System.out.println("Is 10 even: " + isEven.test(10));
        Function<Integer, Integer> square;
        square = n -> (n * n);
        System.out.println("Square of 6: " + square.apply(6));
        Consumer<String> printer;
        printer = s -> System.out.println("Consumed: " + s);
        printer.accept("Hello");
        Supplier<String> supplier;
        supplier = () -> "Generated value";
        System.out.println(supplier.get());
    }
}