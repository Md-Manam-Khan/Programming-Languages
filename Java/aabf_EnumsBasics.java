public class aabf_EnumsBasics
{
    public static void main(String[] args)
    {
        Day today;
        today = Day.WEDNESDAY;
        System.out.println("Today is: " + today);
        switch (today)
        {
            case SATURDAY:
                {
                    System.out.println("It is the weekend");
                    break;
                }
            case SUNDAY:
                {
                    System.out.println("It is the weekend");
                    break;
                }
            default:
                {
                    System.out.println("It is a weekday");
                    break;
                }
        }
    }
}
enum Day
{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}