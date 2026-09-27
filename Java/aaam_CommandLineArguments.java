public class aaam_CommandLineArguments
{
    public static void main(String[] args)
    {
        int i;
        System.out.println("Number of arguments: " + args.length);
        for (i = 0; i < args.length; i++)
        {
            System.out.println("Argument " + i + ": " + args[i]);
        }
    }
}
