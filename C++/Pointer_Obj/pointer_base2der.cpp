#include <iostream>
using namespace std;

class base
{
    int i;
    public:
    void set_i(int num){i = num;}
    int get_i(){return i;}
};

class derived : public base
{
    int j;
    public:
    void set_j(int num){j = num;}
    int get_j(){return j;}
};

main()
{
    base *bptr;
    derived d;

    bptr = &d;

    bptr->set_i(5);
    cout << "i is " << bptr->get_i() << "\n";

    ((derived *)bptr)->set_j(10);
    cout << "j is " << ((derived *)bptr)->get_j() << "\n";
}
