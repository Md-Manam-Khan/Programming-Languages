public class aacs_SwitchExpressions
{
    public static void main(String[] args)
    {
        int day;
        day = 3;
        String name;
        name = switch (day)
        {
            case 1 -> "Monday";
            case 2 -> "Tuesday";
            case 3 -> "Wednesday";
            case 4 -> "Thursday";
            case 5 -> "Friday";
            case 6, 7 -> "Weekend";
            default -> "Invalid day";
        };
        System.out.println("Day " + day + " is " + name);
        String type;
        type = switch (day)
        {
            case 1, 2, 3, 4, 5 -> "Weekday";
            case 6, 7 -> "Weekend";
            default -> "Unknown";
        };
        System.out.println("Type: " + type);
        String grade;
        grade = "B";
        int points;
        points = switch (grade)
        {
            case "A" -> 4;
            case "B" ->
            {
                System.out.println("Computing points for B");
                yield 3;
            }
            case "C" -> 2;
            default -> 0;
        };
        System.out.println("Points: " + points);
        System.out.println("Days in month 2: " + daysInMonth(2));
        System.out.println("Days in month 4: " + daysInMonth(4));
        System.out.println("Days in month 12: " + daysInMonth(12));
    }
    static int daysInMonth(int month)
    {
        return switch (month)
        {
            case 2 -> 28;
            case 4, 6, 9, 11 -> 30;
            default -> 31;
        };
    }
}
