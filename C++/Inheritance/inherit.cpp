#include <iostream>
using namespace std;

class base1
{
    int i;
    public:
    base1(){cout << "base1 constr called..\n";}
    ~base1(){cout << "base1 destr called..\n";}
    void set_i(int num){i = num;}
    int get_i(){return i;}
};

class base2
{
    int j;
    public:
    base2(){cout << "base2 constr called..\n";}
    ~base2(){cout << "base2 destr called..\n";}
    void set_j(int num){j = num;}
    int get_j(){return j;}
};

class derived1 : public base1, public base2
{
    int k;
    public:
    derived1(){cout << "derived1 constr called..\n";}
    ~derived1(){cout << "derived1 destr called..\n";}
};

class derived2 : public derived1
{
    int k;
    public:
    derived2(){cout << "derived2 constr called..\n";}
    ~derived2(){cout << "derived2 destr called..\n";}
};

main()
{
    base1 b1;
    base2 b2;
    derived1 d1;
    derived2 d2;
}
