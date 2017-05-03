#include <iostream>
#include <cstring>
using namespace std;

class employee
{
    char name[50];

    public:
    void putname(char *str);
    void getname(char *str);

    private:
    double wage;

    public:
    void putwage(double wage);
    double getwage();
};

void employee::putname(char *str)
{
    strcpy(name, str);
}

void employee::getname(char *str)
{
    strcpy(str, name);
}

void employee::putwage(double wage)
{
    cout << "Assigning " << wage << "\n";
    this->wage = wage;
}

double employee::getwage()
{
    cout << "Returning " << wage;
    return wage;
}


main()
{
    employee ted;
    employee *ptr;
    ptr = &ted;
    char name[50];

    ptr->putname((char *)"ted");
    ptr->putwage(10000);

    ptr->getname(name);
    cout << "\n" << name << " earns " << ptr->getwage() << " per month.\n";

    return 0;
}
