import java.util.*;
public class aabu_CollectionsUtilityClass
{
    public static void main(String[] args)
    {
        ArrayList<Integer> list;
        list = new ArrayList<Integer>();
        list.add(40);
        list.add(10);
        list.add(30);
        list.add(20);
        System.out.println("Original: " + list);
        Collections.sort(list);
        System.out.println("Sorted: " + list);
        Collections.reverse(list);
        System.out.println("Reversed: " + list);
        System.out.println("Max: " + Collections.max(list));
        System.out.println("Min: " + Collections.min(list));
        Collections.shuffle(list);
        System.out.println("Shuffled: " + list);
    }
}