import java.io.*;
public class aacf_BufferedReaderAndWriter
{
    public static void main(String[] args)
    {
        try
        {
            BufferedWriter bw;
            bw = new BufferedWriter(new FileWriter("lines.txt"));
            bw.write("Line one");
            bw.newLine();
            bw.write("Line two");
            bw.newLine();
            bw.close();
            BufferedReader br;
            br = new BufferedReader(new FileReader("lines.txt"));
            String line;
            line = br.readLine();
            while (line != null)
            {
                System.out.println(line);
                line = br.readLine();
            }
            br.close();
        }
        catch (IOException e)
        {
            System.out.println("An IO exception occurred");
        }
    }
}