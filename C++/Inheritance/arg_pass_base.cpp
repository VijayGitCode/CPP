#include <iostream>
using namespace std;

class base
{
    int i;
    public:
    base(int num){i = num;cout << "base constr called..\n";}
    ~base(){cout << "base destr called..\n";}
    void set_i(int num){i = num;}
    int get_i(){return i;}
};

class derived : public base
{
    int j;
    public:
    derived(int n, int num):base(num){j = n; cout << "derived constr called..\n";}
    ~derived(){cout << "derived destr called..\n";}
    void set_j(int num){j = num;}
    int get_j(){return j;}
};

main()
{
    derived d(10, 5);

    cout << "Val of i in base is: " << d.get_i() << endl;
    cout << "val of j in derived is: " << d.get_j() << endl;
}
