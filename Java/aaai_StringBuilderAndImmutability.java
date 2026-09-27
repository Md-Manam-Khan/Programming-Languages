public class aaai_StringBuilderAndImmutability
{
    public static void main(String[] args)
    {
        String s = "Hello";
        String s2 = s;
        s = s + " World";
        System.out.println("Unchanged reference s2: " + s2);
        System.out.println("New string s: " + s);
        StringBuilder sb = new StringBuilder("Hello");
        sb.append(" World");
        System.out.println("StringBuilder after append: " + sb);
        sb.insert(0, "Say: ");
        System.out.println("StringBuilder after insert: " + sb);
        sb.reverse();
        System.out.println("StringBuilder after reverse: " + sb);
    }
}