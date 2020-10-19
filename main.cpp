#include <iostream>

using namespace std;

class Base
{
public:

    Base(string str)
    {
        cout<<"Base class constructor called from  "<<str<<endl;
    }
};

class Derived1:virtual public Base
{
public:

    Derived1():Base("Derived1")
    {
        cout<<"Inside Derived1 class constr"<<endl;
    }
    void display()
    {
        cout<<"inside Base class"<<endl;
    }
};
class Derived2:virtual public Base
{
public:
    Derived2():Base("Derived2")
    {
        cout<<"Inside Derived2 class constr"<<endl;
    }

};

class child: public Derived2,Derived1
{
public:
    child()
    {

        cout<<"Inside child class constr"<<endl;
    }
};


int main()
{
    child chld;
    //Derived2 d2;
    return 0;
}
