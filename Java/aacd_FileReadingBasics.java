import java.io.*;
public class aacd_FileReadingBasics
{
    public static void main(String[] args)
    {
        try
        {
            FileWriter fw;
            fw = new FileWriter("data.txt");
            fw.write("Hello from Java file handling");
            fw.close();
            FileReader fr;
            fr = new FileReader("data.txt");
            int ch;
            ch = fr.read();
            while (ch != -1)
            {
                System.out.print((char) ch);
                ch = fr.read();
            }
            fr.close();
        }
        catch (IOException e)
        {
            System.out.println("An IO exception occurred");
        }
    }
}