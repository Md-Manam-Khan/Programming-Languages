public class aabi_MultiCatchAndFinally
{
    public static void main(String[] args)
    {
        int[] arr;
        arr = new int[3];
        try
        {
            arr[5] = 10;
        }
        catch (ArrayIndexOutOfBoundsException | NullPointerException e)
        {
            System.out.println("Caught an exception: " + e.getClass().getSimpleName());
        }
        finally
        {
            System.out.println("This block always runs");
        }
    }
}