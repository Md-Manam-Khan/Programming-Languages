#include<bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int length, width;
public:
    rectangle(int l, int w)
    {
        length= l;
        width = w;
    }
    double area()
    {
        return length * width;
    }
};
class circle
{
private:
    int radius;
public:
    circle()
    {
        radius = 1;
    }
    circle(int r)
    {
        radius = r;
    }
    double area()
    {
        return 3.1416 * radius * radius;
    }
};
class name
{
private:
    string name;
public:
    void getname()
    {
        cout<<"Type your name: ";
        cin>>name;
    }
    void showname()
    {
        cout<<"Your name is "<<name<< endl;
    }
};
class employee: public name
{
private:
    int ID;
public:
    void getID()
    {
        cout<<"Type your ID: ";
        cin.ignore();
        cin>>ID;
    }
    void showID()
    {
        cout<<"Your ID is "<< ID<<endl;
    }
    void getinfo()
    {
        getname();
        getID();
    }
    void showinfo()
    {
        showname();
        showID();
    }
};
class animal
{
public:
    void show()
    {
        cout<<"I am from animal class";
    }
};
class mammal: public animal
{
public:
    void show()
    {
        cout<<"I am from mammal class";
    }
};
class dog: public mammal
{
public:
    void show()
    {
        cout<<"I am from dog class";
    }
};
class mathop
{
public:
    void add(int a, int b)
    {
        int sum = a + b;
        cout<<"The sum is: "<<sum;
    }
    void add(int a, int b, int c)
    {
        int sum = a + b + c;
        cout<<"The sum is: "<<sum;
    }
};
class B;
class A
{
private:
    int num1;
public:
    A(int a)
    {
        num1 = a;
    }
    friend void sum (A a, B b);
};
class B
{
private:
    int num2;
public:
    B(int b)
    {
        num2 = b;
    }
    friend void sum (A a, B b);
};
void sum (A a, B b)
{
    int add = a.num1 + b.num2;
    cout<<"The sum of two integers are "<<add;
}

int main()
{
    rectangle rect(5,6);
    cout<<"The area of rectangle is " <<rect.area()<<endl;
    circle obj1;
    cout<<"The area of circle 1 is "<<obj1.area()<<endl;
    circle obj2(2);
    cout<<"The area of circle 2 is "<<obj2.area()<<endl;
    employee emp;
    emp.getinfo();
    emp.showinfo();
    dog d;
    d.animal::show();
    cout<<endl;
    d.mammal::show();
    cout<<endl;
    d.show();
    cout<<endl;
    mathop m;
    m.add(5,6);
    cout<<endl;
    m.add(9,8,7);
    cout<<endl;
    A objA(10);
    B objB(5);
    sum(objA, objB);
    return 0;
}
