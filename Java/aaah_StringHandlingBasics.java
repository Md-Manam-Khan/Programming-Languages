import java.util.*;
public class aaah_StringHandlingBasics
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s;
        System.out.print("Input a string: ");
        s = sc.nextLine();
        System.out.println("Length: " + s.length());
        System.out.println("Uppercase: " + s.toUpperCase());
        System.out.println("Lowercase: " + s.toLowerCase());
        System.out.println("First character: " + s.charAt(0));
        System.out.println("Substring from index 1: " + s.substring(1));
        System.out.println("Concatenated: " + s.concat(" World"));
    }
}