import java.util.*;
public class aaad_IfElseAndSwitch
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Input a number: ");
        n = sc.nextInt();
        if ((n % 2) == 0)
        {
            System.out.println("The number is even");
        }
        else
        {
            System.out.println("The number is odd");
        }
        int day;
        System.out.print("Input a day number (1-7): ");
        day = sc.nextInt();
        switch (day)
        {
            case 1:
                {
                    System.out.println("Sunday");
                    break;
                }
            case 2:
                {
                    System.out.println("Monday");
                    break;
                }
            case 3:
                {
                    System.out.println("Tuesday");
                    break;
                }
            case 4:
                {
                    System.out.println("Wednesday");
                    break;
                }
            case 5:
                {
                    System.out.println("Thursday");
                    break;
                }
            case 6:
                {
                    System.out.println("Friday");
                    break;
                }
            case 7:
                {
                    System.out.println("Saturday");
                    break;
                }
            default:
                {
                    System.out.println("Invalid day number");
                }
        }
    }
}