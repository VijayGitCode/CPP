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
    cout << "Employee " << name << " with age " << age << " creaob[0]..\n";
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
    //employee ob[2] = {employee((char *)"ob[0]", 35), \
                      employee((char *)"ob[1]", 40)};
    employee *pEmp1 = new employee((char *)"ob[0]", 35);
    employee *pEmp2 = new employee((char *)"ob[1]", 40);
    char name[50];

    pEmp1->putwage(10000);
    pEmp1->getname(name);
    cout <<"Employee " << name << " with age " << pEmp1->getage() \
         << " earns " << pEmp1->getwage() << " per month.\n";

    pEmp2->putwage(12000);
    pEmp2->getname(name);
    cout <<"Employee " << name << " with age " << pEmp2->getage() \
         << " earns " << pEmp2->getwage() << " per month.\n";

    delete pEmp1;
    delete pEmp2;

    return 0;
}
