#include <iostream>
using namespace std;

class cl
{
    public:
    int val;
    cl(int i){val = i;}
    int double_val(){return (val+val);}
};

main()
{
    cl ob(12);
    cl *ptr = &ob;
    int cl::*data;
    int (cl::*func)();

    data = &cl::val;
    func = &cl::double_val;

    cout << "Using Object: \n";
    cout << "val is " << ob.*data << "\n"; 
    cout << "double val is " << (ob.*func)() << "\n"; 

    cout << "Using Pointer: \n";
    cout << "val is " << ptr->*data << "\n"; 
    cout << "double val is " << (ptr->*func)() << "\n"; 
}
