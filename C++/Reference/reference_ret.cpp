#include <iostream>
using namespace std;

char s[50] = "Hello World";

char &ref(int a)
{
    return s[a];
}

main()
{
    cout << "initial val of s is: " << s << "\n";
    ref(5) = 'Z';
    cout << "Final val of s is: " << s << "\n";
}
