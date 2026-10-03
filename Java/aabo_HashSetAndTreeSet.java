import java.util.*;
public class aabo_HashSetAndTreeSet
{
    public static void main(String[] args)
    {
        HashSet<Integer> hs;
        hs = new HashSet<Integer>();
        hs.add(30);
        hs.add(10);
        hs.add(20);
        hs.add(10);
        System.out.println("HashSet: " + hs);
        TreeSet<Integer> ts;
        ts = new TreeSet<Integer>();
        ts.add(30);
        ts.add(10);
        ts.add(20);
        ts.add(10);
        System.out.println("TreeSet: " + ts);
    }
}