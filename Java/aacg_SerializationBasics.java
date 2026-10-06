import java.io.*;
public class aacg_SerializationBasics
{
    public static void main(String[] args)
    {
        Student s1;
        s1 = new Student("Manam", 25);
        try
        {
            ObjectOutputStream out;
            out = new ObjectOutputStream(new FileOutputStream("student.ser"));
            out.writeObject(s1);
            out.close();
            System.out.println("Object serialized successfully");
            ObjectInputStream in;
            in = new ObjectInputStream(new FileInputStream("student.ser"));
            Student s2;
            s2 = (Student) in.readObject();
            in.close();
            s2.display();
        }
        catch (IOException | ClassNotFoundException e)
        {
            System.out.println("An exception occurred during serialization");
        }
    }
}
class Student implements Serializable
{
    String name;
    int age;
    Student(String name, int age)
    {
        this.name = name;
        this.age = age;
    }
    void display()
    {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}