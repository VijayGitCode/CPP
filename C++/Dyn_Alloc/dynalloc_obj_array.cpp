#include <iostream>
using namespace std;

class base
{
    int i;
    public:
    base(){cout << "Constructor..\n";}
    ~base(){cout << "Destructor..\n";}
    void set_i(int num){i = num;}
    int get_i(){return i;}
};

main()
{
    base *bptr;

    bptr = new base[2];

    bptr[0].set_i(5);
    cout << "i is " << bptr[0].get_i() << "\n";
    bptr[1].set_i(6);
    cout << "i is " << bptr[1].get_i() << "\n";

    delete []bptr;
}
