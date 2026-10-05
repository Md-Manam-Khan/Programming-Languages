public class aabw_GenericClassesAndMethods
{
    public static void main(String[] args)
    {
        Pair<String, Integer> p1;
        p1 = new Pair<String, Integer>("Marks", 95);
        System.out.println(p1.getFirst() + " -> " + p1.getSecond());
        Integer[] numbers = {5, 10, 15};
        String[] names = {"Rafi", "Tanvir"};
        printArray(numbers);
        printArray(names);
    }
    static <T> void printArray(T[] array)
    {
        for (T item : array)
        {
            System.out.println(item);
        }
    }
}
class Pair<A, B>
{
    private A first;
    private B second;
    Pair(A first, B second)
    {
        this.first = first;
        this.second = second;
    }
    A getFirst()
    {
        return first;
    }
    B getSecond()
    {
        return second;
    }
}