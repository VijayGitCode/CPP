#include <iostream>
using namespace std;

void func(int a, int b = 5)
{
    cout << "Val of a is: " << a << endl;
    cout << "Val of b is: " << b << endl;
}

main()
{
    func(10);
    func(5, 10);
}
