#include <iostream>
using namespace std;

void ref(int &a)
{
    a++;
}

main()
{
    int a = 5;

    cout << "Init val of a is: " << a << "\n";

    ref(a);

    cout << "Final val of a is: " << a << "\n";
}
