#include <iostream>
using namespace std;

class cl
{
    public:
    int a;
    cl(int i){cout << "Constructor..\n";a = i;}
    ~cl(){cout << "Destructor..\n";}
};

//void ref(cl &ob)
void ref(cl *ptr)
{
    //ob.a = 10;
    ptr->a = 10;
}

main()
{
    cl obj(5);
    cout << "Init val of a is: " << obj.a << "\n";

    //ref(obj);
    ref(&obj);

    cout << "Final val of a is: " << obj.a << "\n";
}
