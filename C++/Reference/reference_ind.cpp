#include <iostream>
using namespace std;

main()
{
    int a = 5;
    int &ref = a;

    cout << a << " " << ref << "\n";

    a = 10;

    cout << a << " " << ref << "\n";

    ref = 100;

    cout << a << " " << ref << "\n";
}
