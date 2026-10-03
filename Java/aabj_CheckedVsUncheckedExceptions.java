import java.io.*;
public class aabj_CheckedVsUncheckedExceptions
{
    public static void main(String[] args)
    {
        int n;
        n = 5;
        try
        {
            System.out.println("Result: " + (10 / (n - 5)));
        }
        catch (ArithmeticException e)
        {
            System.out.println("Unchecked exception caught: " + e.getMessage());
        }
        try
        {
            readFile();
        }
        catch (IOException e)
        {
            System.out.println("Checked exception caught: " + e.getMessage());
        }
    }
    static void readFile() throws IOException
    {
        throw new IOException("File not found");
    }
}