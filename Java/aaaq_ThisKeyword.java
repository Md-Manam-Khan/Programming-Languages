public class aaaq_ThisKeyword
{
    public static void main(String[] args)
    {
        Account acc;
        acc = new Account("Manam", 5000);
        acc.display();
        acc.deposit(1500);
        acc.display();
    }
}
class Account
{
    String name;
    int balance;
    Account(String name, int balance)
    {
        this.name = name;
        this.balance = balance;
    }
    void deposit(int balance)
    {
        this.balance = (this.balance + balance);
    }
    void display()
    {
        System.out.println("Name: " + this.name);
        System.out.println("Balance: " + this.balance);
    }
}