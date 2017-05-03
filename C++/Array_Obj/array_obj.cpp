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
    employee ob[2] = {employee((char *)"ob[0]", 35),
                      employee((char *)"ob[1]", 40)};
    char name[50];

    ob[0].putwage(10000);
    ob[0].getname(name);
    cout <<"Employee " << name << " with age " << ob[0].getage() \
         << " earns " << ob[0].getwage() << " per month.\n";

    ob[1].putwage(12000);
    ob[1].getname(name);
    cout <<"Employee " << name << " with age " << ob[1].getage() \
         << " earns " << ob[1].getwage() << " per month.\n";

    // Below are 4 ways of accessing a static variable when it is public
    // When it is private, last 2 lines throw compilation error
    cout << "Employee Count is: " << ob[1].getempcount() << "\n";
    cout << "Employee Count is: " << ob[0].getempcount() << "\n";

    cout << "Employee Count is: " << employee::empcount << "\n";
    cout << "Employee Count is: " << ob[1].empcount << "\n";

    return 0;
}
