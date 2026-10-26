public class aacm_BuilderPatternExample
{
    public static void main(String[] args)
    {
        Pizza p1;
        Pizza p2;
        p1 = new Pizza.Builder("Large").cheese(true).pepperoni(true).build();
        p2 = new Pizza.Builder("Small").mushroom(true).build();
        p1.display();
        p2.display();
    }
}
class Pizza
{
    private String size;
    private boolean cheese;
    private boolean pepperoni;
    private boolean mushroom;
    private Pizza(Builder builder)
    {
        this.size = builder.size;
        this.cheese = builder.cheese;
        this.pepperoni = builder.pepperoni;
        this.mushroom = builder.mushroom;
    }
    void display()
    {
        System.out.println("Size: " + size);
        System.out.println("Cheese: " + cheese);
        System.out.println("Pepperoni: " + pepperoni);
        System.out.println("Mushroom: " + mushroom);
    }
    static class Builder
    {
        private String size;
        private boolean cheese;
        private boolean pepperoni;
        private boolean mushroom;
        Builder(String size)
        {
            this.size = size;
        }
        Builder cheese(boolean cheese)
        {
            this.cheese = cheese;
            return this;
        }
        Builder pepperoni(boolean pepperoni)
        {
            this.pepperoni = pepperoni;
            return this;
        }
        Builder mushroom(boolean mushroom)
        {
            this.mushroom = mushroom;
            return this;
        }
        Pizza build()
        {
            return new Pizza(this);
        }
    }
}
