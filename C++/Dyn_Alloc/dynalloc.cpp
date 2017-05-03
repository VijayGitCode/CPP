#include <iostream>
using namespace std;

main()
{
    int *p;
    int *p1;
    int *p2;
    int i = 0;

    p = new int;
    p1 = new int(10);
    p2 = new int[5];

    *p = 5;

    for(i = 0; i < 5; i++)
    {
        p2[i] = i;
        cout << "Val of p" << i << "is " << p2[i] << "\n";
    }

    cout << "Val p1 is " << *p1 << "\n";
    cout << "Val p is " << *p << "\n";

    delete []p2;
    delete p1;
    delete p;
}
