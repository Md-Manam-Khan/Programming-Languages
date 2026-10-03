import java.util.*;
public class aabt_ComparatorInterface
{
    public static void main(String[] args)
    {
        ArrayList<Student> list;
        list = new ArrayList<Student>();
        list.add(new Student("Rafi", 80));
        list.add(new Student("Tanvir", 95));
        list.add(new Student("Nabila", 70));
        Collections.sort(list, new NameComparator());
        for (Student s : list)
        {
            s.display();
        }
    }
}
class Student
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
}
class NameComparator implements Comparator<Student>
{
    public int compare(Student a, Student b)
    {
        return a.name.compareTo(b.name);
    }
}