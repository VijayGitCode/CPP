#include <iostream>
using namespace std;

class base
{
    int i;
    public:
    base();
//    base(const base &o);
    ~base();
    void set_i(int num);
    int get_i();
    base operator+(base b2);
    base operator-(base b2);
    base operator*(base b2);
    base operator/(base b2);
    base operator++();
    base operator--();
    base operator++(int x);
    base operator--(int x);
};

base::base()
{
    cout << "Constructor: Obj addr - " << this << endl;
}

/*
base::base(const base &o)
{
    cout << "Copy Constructor: Obj addr - " << this << endl;
}*/

base::~base()
{
    cout << "Destructor: Obj addr - " << this << endl;
}

void base::set_i(int num)
{
    i = num;
}

int base::get_i()
{
    return i;
}

base base::operator+(base b2)
{
    base temp;

    cout << "Operator+ this addr: " << this << endl;
    temp.i = b2.i + i;

    return temp;
}

base base::operator-(base b2)
{
    base temp;

    cout << "Operator- this addr: " << this << endl;
    temp.i = i - b2.i;

    return temp;
}

base base::operator*(base b2)
{
    base temp;

    cout << "Operator+ this addr: " << this << endl;
    temp.i = b2.i * i;

    return temp;
}

base base::operator/(base b2)
{
    base temp;

    cout << "Operator- this addr: " << this << endl;
    temp.i = i / b2.i;

    return temp;
}

base base::operator++()
{
    i++;

    return *this;
}

base base::operator--()
{
    i--;

    return *this;
}

base base::operator++(int x)
{
    i++;

    return *this;
}

base base::operator--(int x)
{
    i--;

    return *this;
}

main()
{
    base b1, b2, b3, b4, b5, b6;

    b1.set_i(10);
    cout << "b1 i is " << b1.get_i() << endl;

    b2.set_i(5);
    cout << "b2 i is " << b2.get_i() << endl;

    b3 = b1 + b2;
    cout << "b3(+) i is " << b3.get_i() << endl;

    b4 = b1 - b2;
    cout << "b4(-) i is " << b4.get_i() << endl;

    b5 = b1 * b2;
    cout << "b5(*) i is " << b5.get_i() << endl;

    b6 = b1 / b2;
    cout << "b6(/) i is " << b6.get_i() << endl;

    ++b1;
    cout << "b1 i is " << b1.get_i() << endl;
    
    --b2;
    cout << "b2 i is " << b2.get_i() << endl;

    b2++;
    cout << "b2 i is " << b2.get_i() << endl;
    
    b1--;
    cout << "b1 i is " << b1.get_i() << endl;
}
