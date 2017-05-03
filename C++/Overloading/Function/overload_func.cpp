#include <iostream>
#include <cstring>
using namespace std;

class employee
{
    char name[50];
    double wage;
    int age;

    public:
    int getage();
    int putage(int ag);
    void putwage(double wage);
    double getwage();
    void getname(char *str);
    employee(char *str);
    employee(char *str, int age);
    employee(char *str, int age, double wage);
    ~employee();
};

employee::employee(char *str)
{
    strcpy(name, str);
    cout << "Employee " << name << " created..\n";
}

employee::employee(char *str, int age)
{
    this->age = age;
    strcpy(name, str);
    cout << "Employee " << name << " with age " << age << " created..\n";
}

employee::employee(char *str, int age, double wage)
{
    this->age = age;
    strcpy(name, str);
    this->wage = wage;
    cout << "Employee " << name << " with age " << age << ", wage " << wage << " created..\n";
}

employee::~employee()
{
    cout << "Employee " << name << " with age " << age << " destroyed..\n";
}

void employee::getname(char *str)
{
    strcpy(str, name);
}

int employee::getage()
{
    return age;
}

int employee::putage(int ag)
{
    age = ag;
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
    employee john((char *)"john");
    employee ted((char *)"ted", 35);
    employee mike((char *)"mike", 30, 15000);
    char name[50];

    john.putage(32);
    john.putwage(12000);
    ted.putwage(10000);

    john.getname(name);
    cout <<"Employee " << name << " with age " << john.getage() \
         << " earns " << john.getwage() << " per month.\n";

    ted.getname(name);
    cout <<"Employee " << name << " with age " << ted.getage() \
         << " earns " << ted.getwage() << " per month.\n";

    mike.getname(name);
    cout <<"Employee " << name << " with age " << mike.getage() \
         << " earns " << mike.getwage() << " per month.\n";

    return 0;
}
