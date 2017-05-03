#include <iostream>
#include <cstring>
using namespace std;

class employee
{
    char name[50];
    //static int empcount;

    public:
    static int empcount;
    int getage();
    void getname(char *str);
    int getempcount();
    employee(char *str, int age);
    ~employee();

    private:
    double wage;
    int age;

    public:
    void putwage(double wage);
    double getwage();
};

int employee::empcount; //Define it

employee::employee(char *str, int age)
{
    this->age = age;
    strcpy(name, str);
    cout << "Employee " << name << " with age " << age << " created..\n";
    empcount++;
}

employee::~employee()
{
    empcount--;
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

int employee::getempcount()
{
    return empcount;
}

main()
{
    employee ted((char *)"ted", 35);
    employee john((char *)"john", 40);
    char name[50];

    ted.putwage(10000);
    ted.getname(name);
    cout <<"Employee " << name << " with age " << ted.getage() \
         << " earns " << ted.getwage() << " per month.\n";

    john.putwage(12000);
    john.getname(name);
    cout <<"Employee " << name << " with age " << john.getage() \
         << " earns " << john.getwage() << " per month.\n";

    // Below are 4 ways of accessing a static variable when it is public
    // When it is private, last 2 lines throw compilation error
    cout << "Employee Count is: " << john.getempcount() << "\n";
    cout << "Employee Count is: " << ted.getempcount() << "\n";

    cout << "Employee Count is: " << employee::empcount << "\n";
    cout << "Employee Count is: " << john.empcount << "\n";

    return 0;
}
