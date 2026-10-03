import java.util.*;
public class aabn_LinkedListBasics
{
    public static void main(String[] args)
    {
        LinkedList<Integer> list;
        list = new LinkedList<Integer>();
        list.add(10);
        list.add(20);
        list.addFirst(5);
        list.addLast(30);
        System.out.println("List: " + list);
        list.removeFirst();
        System.out.println("After removing first: " + list);
        System.out.println("First element: " + list.getFirst());
        System.out.println("Last element: " + list.getLast());
    }
}