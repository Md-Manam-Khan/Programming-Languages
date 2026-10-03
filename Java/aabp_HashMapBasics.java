import java.util.*;
public class aabp_HashMapBasics
{
    public static void main(String[] args)
    {
        HashMap<String, Integer> map;
        map = new HashMap<String, Integer>();
        map.put("Manam", 25);
        map.put("Rafi", 21);
        map.put("Tanvir", 22);
        System.out.println("Map: " + map);
        System.out.println("Manam's age: " + map.get("Manam"));
        map.remove("Rafi");
        System.out.println("After removal: " + map);
        for (String key : map.keySet())
        {
            System.out.println(key + " -> " + map.get(key));
        }
    }
}