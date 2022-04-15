#include <iostream>
using namespace std;
using std::string;
class AbstractEmployee
{ // The contract
    virtual void Askforpromotion() = 0;
};
class Employee : AbstractEmployee // declearing contract
{
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age <= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void introduction()
    {
        cout << "I am " << Name << " I work in " << Company << " and my age is " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void Askforpromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promoted" << endl;
        }
        else
        {
            cout << Name << " sorry no promotion for you" << endl;
        }
    }
    virtual void work()
    {
        cout << Name << " is checking mail and doing work" << endl;
    }
};

class Developer : public Employee
{
public:
    string FavProgLang;
    Developer(string name, string company, int age, string favproglang)

        : Employee(name, company, age)
    {

        FavProgLang = favproglang;
    }

    void Fixbug()
    {
        cout << Name << " is fixing the bug with the help of " << FavProgLang << endl;
    }
    void work()
    {
        cout << Name << " is writing code in " << FavProgLang << endl;
    }
};
class Teacher : public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)

        : Employee(name, company, age)
    {
        Subject = subject;
    }
    void Profession(){
        cout<<Name<<"is teaching "<< Subject<<endl;
    }
    void work(){
        cout<<Name<<" is teaching "<< Subject<<" in class"<<endl;
    }
};


int main()
{
        Employee employee1 = Employee("levi", "Dc", 18);
        employee1.introduction();
        employee1.setName("Sandra");
        cout<<employee1.getName()<<"\n";
      employee1.Name = "levi";
      employee1.Company = "Dc";
      employee1.Age = 18;
      employee1.introduction();
    employee1.Askforpromotion();
    Developer d = Developer("levi", "dc", 18, "c++");
    Teacher t= Teacher("Valkonx33", "dc", 19, "Science");
    //d.Fixbug();
    //d.work();
    Employee *e1 = &d;
    Teacher *e2= &t;
    e1->work();
    e2->work();
};
