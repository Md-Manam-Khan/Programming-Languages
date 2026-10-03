import java.util.*;
public class aabs_ComparableInterface
{
    public static void main(String[] args)
    {
        ArrayList<Student> list;
        list = new ArrayList<Student>();
        list.add(new Student("Rafi", 80));
        list.add(new Student("Tanvir", 95));
        list.add(new Student("Nabila", 70));
        Collections.sort(list);
        for (Student s : list)
        {
            s.display();
        }
    }
}
class Student implements Comparable<Student>
{
    String name;
    int marks;
    Student(String name, int marks)
    {
        this.name = name;
        this.marks = marks;
    }
    void display()
    {
        System.out.println(name + " -> " + marks);
    }
    public int compareTo(Student other)
    {
        return (this.marks - other.marks);
    }
}