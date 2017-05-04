#include <iostream>
using namespace std;

class base
{
    int i;
    public:
    void set_i(int num){i = num;}
    int get_i(){return i;}
    base();
    ~base();
    friend base operator+(base b1, base b2);
    friend base operator++(base &b1);
    friend base operator++(base &b1, int x);
    friend base operator+(int a, base b1);
    friend base operator+(base b1, int a);
};

base::base()
{
    cout << "Constructor: Obj addr - " << this << endl;
}

base::~base()
{
    cout << "Destructor: Obj addr - " << this << endl;
}

base operator+(base b1, base b2)
{
    base temp;

    temp.i = b1.i + b2.i;

    return temp;
}

base operator++(base &b1)
{
    b1.i++;

    return b1;
}

base operator++(base &b1, int x)
{
    b1.i++;

    return b1;
}

base operator+(int a, base b1)
{
    base temp;

    temp.i = a + b1.i;

    return temp;
}

base operator+(base b1, int a)
{
    base temp;

    temp.i = a + b1.i + 1;

    return temp;
}

main()
{
    base b1, b2, b3;

    b1.set_i(10);
    cout << "b1 i is " << b1.get_i() << endl;

    b2.set_i(5);
    cout << "b2 i is " << b2.get_i() << endl;

    b3 = b1 + b2;
    cout << "b3(+) i is " << b3.get_i() << endl;
    
    ++b1;
    cout << "b1 i is " << b1.get_i() << endl;

    b2++;
    cout << "b2 i is " << b2.get_i() << endl;

    b1 = 100 + b1;
    cout << "b1 i is " << b1.get_i() << endl;

    b2 = b2 + 100;
    cout << "b2 i is " << b2.get_i() << endl;
}
