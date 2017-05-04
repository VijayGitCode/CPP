#include <iostream>
using namespace std;

class cl
{
    //cl *p;
    public:
    int a;
    cl(){cout << "Constructor.. " << this << "\n";}
    cl(const cl &o){cout << "Copy Constructor..\n";\
     //               p = new cl();\
     //             p->a = o.a;
                    a = o.a;
     //               cout << "Addr in copy constr is(p): " << (cl *)p << endl;
                    cout << "Addr in copy constr is: " << this << endl;}
    ~cl(){cout << "Destructor freeing addr: " << this << endl;}
};

main()
{
    cl obj;
    obj.a = 5;
    cl *p1 = &obj;

    cl obj1 = obj;
    cout << "Addr of main obj is: " << p1 << endl;
}
