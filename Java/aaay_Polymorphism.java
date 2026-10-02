public class aaay_Polymorphism
{
    public static void main(String[] args)
    {
        Instrument i1;
        i1 = new Guitar();
        i1.play();
        i1 = new Piano();
        i1.play();
    }
}
class Instrument
{
    void play()
    {
        System.out.println("Playing an instrument");
    }
}
class Guitar extends Instrument
{
    void play()
    {
        System.out.println("Playing the guitar");
    }
}
class Piano extends Instrument
{
    void play()
    {
        System.out.println("Playing the piano");
    }
}