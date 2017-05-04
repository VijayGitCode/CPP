#include <iostream>
#include <cstdlib>
using namespace std;

class base
{
    int i;
    int a[3];
    public:
    base(int i, int j, int k);
    ~base();
    void set_i(int num){i = num;}
    int get_i(){return i;}
    int operator[] (int i);
};

base::base(int i, int j, int k)
{
    cout << "Constructor: Obj addr - " << this << endl;
    a[0] = i;
    a[1] = j;
    a[2] = k;
}

base::~base()
{
    cout << "Destructor: Obj addr - " << this << endl;
}

int base::operator[] (int i)
{
    return a[i];
}

main()
{
    base bptr(10, 20, 30);

    bptr.set_i(5);
    cout << "val is " << bptr[2] << "\n";
}
