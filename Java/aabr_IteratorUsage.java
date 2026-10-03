import java.util.*;
public class aabr_IteratorUsage
{
    public static void main(String[] args)
    {
        ArrayList<Integer> list;
        Iterator<Integer> it;
        list = new ArrayList<Integer>();
        list.add(10);
        list.add(15);
        list.add(20);
        list.add(25);
        it = list.iterator();
        while (it.hasNext())
        {
            int value;
            value = it.next();
            if ((value % 2) == 0)
            {
                it.remove();
            }
        }
        System.out.println("List after removing even numbers: " + list);
    }
}