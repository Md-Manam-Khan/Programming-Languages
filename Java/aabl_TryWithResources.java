import java.io.*;
public class aabl_TryWithResources
{
    public static void main(String[] args)
    {
        try (StringReader reader = new StringReader("Hello"))
        {
            int ch;
            ch = reader.read();
            System.out.println("First character code: " + ch);
        }
        catch (IOException e)
        {
            System.out.println("An IO exception occurred");
        }
        System.out.println("The resource is closed automatically");
    }
}