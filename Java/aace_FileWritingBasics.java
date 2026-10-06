import java.io.*;
public class aace_FileWritingBasics
{
    public static void main(String[] args)
    {
        try
        {
            FileWriter fw;
            fw = new FileWriter("notes.txt");
            fw.write("First line\n");
            fw.write("Second line\n");
            fw.close();
            System.out.println("Data written successfully");
            FileWriter appendFw;
            appendFw = new FileWriter("notes.txt", true);
            appendFw.write("Third line, appended\n");
            appendFw.close();
            System.out.println("Data appended successfully");
        }
        catch (IOException e)
        {
            System.out.println("An IO exception occurred");
        }
    }
}