#include <iostream>
using namespace std;

class base1
{
    public:
    int i;
};

class derived1 : virtual public base1
{
    public:
    int j;
};

class derived2 : virtual public base1
{
    public:
    int k;
};

class derived3 : public derived1, public derived2
{
};

main()
{
    derived3 d3;
    d3.base1::i = 11;
    cout << "Val of i: " << d3.base1::i << endl;
}
