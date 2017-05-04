#include <iostream>
using namespace std;

class base
{
    int i;
    public:
    virtual void vfunc() = 0;
};

class derived1 : public base
{
    int j;
    public:
    void vfunc()
    {
        cout << "vfunc in derived1.." << endl;
    }
};

class derived2 : public base
{
    int k;
    public:
    void vfunc()
    {
        cout << "vfunc in derived2.." << endl;
    }
};

class derived3 : public derived2
{
    int k;
    public:
    void vfunc()
    {
        cout << "vfunc in derived3.." << endl;
    }
};

main()
{
    base *bp;
    derived1 d1;
    derived2 d2;
    derived3 d3;

    bp = &d1;
    bp->vfunc();

    bp = &d2;
    bp->vfunc();

    bp = &d3;
    bp->vfunc();
}
