public class aabg_EnumsWithFieldsAndMethods
{
    public static void main(String[] args)
    {
        Planet p1;
        p1 = Planet.EARTH;
        System.out.println("Planet: " + p1);
        System.out.println("Mass: " + p1.getMass());
    }
}
enum Planet
{
    MERCURY(3.3), VENUS(4.8), EARTH(5.9);
    private double mass;
    Planet(double mass)
    {
        this.mass = mass;
    }
    double getMass()
    {
        return mass;
    }
}