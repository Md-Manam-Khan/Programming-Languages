import java.util.*;
public class aabq_TreeMapAndLinkedHashMap
{
    public static void main(String[] args)
    {
        TreeMap<String, Integer> tm;
        tm = new TreeMap<String, Integer>();
        tm.put("Zara", 1);
        tm.put("Amir", 2);
        tm.put("Manam", 3);
        System.out.println("TreeMap (sorted by key): " + tm);
        LinkedHashMap<String, Integer> lhm;
        lhm = new LinkedHashMap<String, Integer>();
        lhm.put("Zara", 1);
        lhm.put("Amir", 2);
        lhm.put("Manam", 3);
        System.out.println("LinkedHashMap (insertion order): " + lhm);
    }
}