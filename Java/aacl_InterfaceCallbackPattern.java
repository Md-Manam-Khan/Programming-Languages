public class aacl_InterfaceCallbackPattern
{
    public static void main(String[] args)
    {
        Button login;
        login = new Button("Login");
        login.setOnClickListener(new OnClickListener()
        {
            public void onClick(String label)
            {
                System.out.println(label + " button was clicked");
            }
        });
        login.click();
        login.setOnClickListener(label -> System.out.println("New listener received: " + label));
        login.click();
    }
}
interface OnClickListener
{
    void onClick(String label);
}
class Button
{
    String label;
    OnClickListener listener;
    Button(String label)
    {
        this.label = label;
    }
    void setOnClickListener(OnClickListener listener)
    {
        this.listener = listener;
    }
    void click()
    {
        if (listener != null)
        {
            listener.onClick(label);
        }
    }
}
