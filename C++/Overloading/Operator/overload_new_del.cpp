#include <iostream>
#include <cstdlib>
using namespace std;

class base
{
    int i;
    public:
    base();
    ~base();
    void set_i(int num){i = num;}
    int get_i(){return i;}
    void *operator new(size_t size);
    void operator delete(void *p);
    void *operator new[](size_t size);
    void operator delete[](void *p);
};

base::base()
{
    cout << "Constructor: Obj addr - " << this << endl;
}

base::~base()
{
    cout << "Destructor: Obj addr - " << this << endl;
}

void * base::operator new(size_t size)
{
    void *p;

    cout << "In overloaded new..\n";

    p = malloc(size);

    return p;
}

void base::operator delete(void *p)
{
    cout << "In overloaded delete..\n";
    free(p);
}

void * base::operator new[](size_t size)
{
    void *p;

    cout << "In overloaded new..\n";

    p = malloc(size);

    return p;
}

void base::operator delete[](void *p)
{
    cout << "In overloaded delete..\n";
    free(p);
}

main()
{
    base *bptr, *bptr1;
    int i = 0;

    bptr = new base;
    bptr1 = new base[10];

    bptr->set_i(5);
    cout << "i is " << bptr->get_i() << "\n";

    for(i = 0; i < 10; i++)
    {
        bptr1[i].set_i(i);
        cout << "bptr1 i is " << bptr1[i].get_i() << "\n";
    }

    delete []bptr1;
    delete bptr;
}
