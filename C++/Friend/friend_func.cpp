#include <iostream>
#include <cstring>
using namespace std;

class manager;  // forward declaration

class employee
{
    char name[50];

    public:
    employee(char *str, int age);
    ~employee();

    int getage();
    void getname(char *str);
    friend void agecompare(manager obj1, employee obj2);

    private:
    double wage;
    int age;

    public:
    void putwage(double wage);
    double getwage();
};

class manager
{
    char name[50];

    public:
    manager(char *str, int age);
    ~manager();

    int getage();
    void getname(char *str);
    friend void agecompare(manager obj1, employee obj2);

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
    cout << "Employee " << name << " with age " << age << " created..\n";
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

void employee::putwage(double wage)
{
    this->wage = wage;
}

double employee::getwage()
{
    return wage;
}

manager::manager(char *str, int age)
{
    this->age = age;
    strcpy(name, str);
    cout << "Manager " << name << " with age " << age << " created..\n";
}

manager::~manager()
{
    cout << "Manager " << name << " with age " << age << " destroyed..\n";
}

void manager::getname(char *str)
{
    strcpy(str, name);
}

int manager::getage()
{
    return age;
}

void manager::putwage(double wage)
{
    this->wage = wage;
}

double manager::getwage()
{
    return wage;
}

void agecompare(manager obj1, employee obj2)
{
    if(obj1.age > obj2.age)
    {
        cout << "Manager is older to employee..\n";
    } else
    {
        cout << "Employee is older to Manager..\n";
    }
}

main()
{
    employee ted((char *)"ted", 35);
    manager john((char *)"john", 40);

    char name[50];
    char man_name[50];

    ted.putwage(10000);
    ted.getname(name);
    cout <<"Employee " << name << " with age " << ted.getage() \
         << " earns " << ted.getwage() << " per month.\n";
    
    john.putwage(15000);
    john.getname(man_name);
    cout <<"Manager " << man_name << " with age " << john.getage() \
         << " earns " << john.getwage() << " per month.\n";

    agecompare(john, ted);
    return 0;
}
