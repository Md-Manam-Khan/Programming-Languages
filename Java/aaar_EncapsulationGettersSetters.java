public class aaar_EncapsulationGettersSetters
{
    public static void main(String[] args)
    {
        Employee e1;
        e1 = new Employee();
        e1.setName("Nabila");
        e1.setSalary(45000);
        System.out.println("Name: " + e1.getName());
        System.out.println("Salary: " + e1.getSalary());
        e1.setSalary(-1000);
        System.out.println("Salary: " + e1.getSalary());
    }
}
class Employee
{
    private String name;
    private int salary;
    void setName(String name)
    {
        this.name = name;
    }
    String getName()
    {
        return this.name;
    }
    void setSalary(int salary)
    {
        if (salary < 0)
        {
            this.salary = 0;
        }
        else
        {
            this.salary = salary;
        }
    }
    int getSalary()
    {
        return this.salary;
    }
}