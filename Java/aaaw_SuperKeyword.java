public class aaaw_SuperKeyword
{
    public static void main(String[] args)
    {
        Car c1;
        c1 = new Car("Toyota", 2022);
        c1.display();
    }
}
class Vehicle
{
    String brand;
    Vehicle(String brand)
    {
        this.brand = brand;
    }
    void display()
    {
        System.out.println("Brand: " + brand);
    }
}
class Car extends Vehicle
{
    int year;
    Car(String brand, int year)
    {
        super(brand);
        this.year = year;
    }
    void display()
    {
        super.display();
        System.out.println("Year: " + year);
    }
}