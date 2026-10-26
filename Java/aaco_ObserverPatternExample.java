import java.util.*;
public class aaco_ObserverPatternExample
{
    public static void main(String[] args)
    {
        NewsAgency agency;
        Subscriber s1;
        Subscriber s2;
        agency = new NewsAgency();
        s1 = new Subscriber("Rafi");
        s2 = new Subscriber("Tanvir");
        agency.addObserver(s1);
        agency.addObserver(s2);
        agency.publish("Exam schedule announced");
        agency.removeObserver(s1);
        agency.publish("Result date announced");
    }
}
interface Observer
{
    void update(String news);
}
class NewsAgency
{
    ArrayList<Observer> observers = new ArrayList<Observer>();
    void addObserver(Observer o)
    {
        observers.add(o);
    }
    void removeObserver(Observer o)
    {
        observers.remove(o);
    }
    void publish(String news)
    {
        for (Observer o : observers)
        {
            o.update(news);
        }
    }
}
class Subscriber implements Observer
{
    String name;
    Subscriber(String name)
    {
        this.name = name;
    }
    public void update(String news)
    {
        System.out.println(name + " received: " + news);
    }
}
