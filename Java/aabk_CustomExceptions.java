public class aabk_CustomExceptions
{
    public static void main(String[] args)
    {
        int age;
        age = -5;
        try
        {
            validateAge(age);
        }
        catch (InvalidAgeException e)
        {
            System.out.println("Caught custom exception: " + e.getMessage());
        }
    }
    static void validateAge(int age) throws InvalidAgeException
    {
        if (age < 0)
        {
            throw new InvalidAgeException("Age cannot be negative");
        }
        System.out.println("Age is valid: " + age);
    }
}
class InvalidAgeException extends Exception
{
    InvalidAgeException(String message)
    {
        super(message);
    }
}