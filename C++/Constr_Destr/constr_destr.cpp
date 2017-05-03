#include <iostream>
#include <cstring>
using namespace std;

class employee
{
    char name[50];

    public:
    int getage();
    void getname(char *str);
    employee(char *str, int age);
    ~employee();

    private:
    double wage;
    int age;

    public:
    void putwage(double wage);
    double getwage();
};

employee::employee(char *str, int age)
{
    this->age = age;
    strcpy(name, str);
    cout << "Employee " << name << "with age " << age << " created..\n";
}

employee::~employee()
{
    cout << "Employee " << name << "with age " << age << " destroyed..\n";
}

void employee::getname(char *str)
{
    strcpy(str, name);
}

int employee::getage()
{
    return age;
}

void employee::putwage(double wage)
{
    this->wage = wage;
}

double employee::getwage()
{
    return wage;
}


main()
{
    employee ted((char *)"ted", 35);
    char name[50];

    ted.putwage(10000);

    ted.getname(name);
    cout <<"Employee " << name << "with age " << ted.getage() \
         << " earns " << ted.getwage() << " per month.\n";

    return 0;
}
