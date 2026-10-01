public class aaan_ClassesAndObjects
{
    public static void main(String[] args)
    {
        Student s1;
        Student s2;
        s1 = new Student();
        s2 = new Student();
        s1.name = "Rafi";
        s1.age = 21;
        s2.name = "Tanvir";
        s2.age = 22;
        s1.display();
        s2.display();
    }
}
class Student
{
    String name;
    int age;
    void display()
    {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}