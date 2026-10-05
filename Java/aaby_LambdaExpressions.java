public class aaby_LambdaExpressions
{
    public static void main(String[] args)
    {
        Greeting g1;
        g1 = () -> System.out.println("Hello from a lambda");
        g1.greet();
        Calculator add;
        add = (a, b) -> (a + b);
        System.out.println("Sum: " + add.calculate(5, 10));
    }
}
interface Greeting
{
    void greet();
}
interface Calculator
{
    int calculate(int a, int b);
}