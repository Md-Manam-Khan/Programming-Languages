import java.util.*;
public class aacp_OptionalClassUsage
{
    public static void main(String[] args)
    {
        Optional<String> name;
        name = Optional.of("Manam");
        System.out.println("Is present: " + name.isPresent());
        System.out.println("Value: " + name.get());
        Optional<String> empty;
        empty = Optional.empty();
        System.out.println("Is empty: " + empty.isEmpty());
        System.out.println("With default: " + empty.orElse("Unknown"));
        String raw;
        raw = null;
        Optional<String> safe;
        safe = Optional.ofNullable(raw);
        System.out.println("Safe value: " + safe.orElse("No value"));
        name.ifPresent(n -> System.out.println("Hello, " + n));
        empty.ifPresentOrElse(n -> System.out.println("Hello, " + n), () -> System.out.println("Nothing to greet"));
        Optional<Integer> length;
        length = name.map(n -> n.length());
        System.out.println("Name length: " + length.get());
        Optional<String> filtered;
        filtered = name.filter(n -> n.startsWith("R"));
        System.out.println("Starts with R: " + filtered.isPresent());
        System.out.println("Student 2: " + findStudent(2).orElse("Not found"));
        System.out.println("Student 9: " + findStudent(9).orElse("Not found"));
        try
        {
            findStudent(9).orElseThrow(() -> new IllegalArgumentException("Student does not exist"));
        }
        catch (IllegalArgumentException e)
        {
            System.out.println("Caught: " + e.getMessage());
        }
    }
    static Optional<String> findStudent(int id)
    {
        if (id == 1)
        {
            return Optional.of("Rafi");
        }
        else if (id == 2)
        {
            return Optional.of("Tanvir");
        }
        else
        {
            return Optional.empty();
        }
    }
}
