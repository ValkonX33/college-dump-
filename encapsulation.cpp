#include <iostream>
using namespace std;
using std::string;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

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
        if(age<=18)
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
};
int main()
{
    Employee employee1 = Employee("levi", "Dc", 19);
    employee1.introduction();
    employee1.setName("Sandra");
    cout<< employee1.getName();
    //   employee1.Name = "levi";
    //   employee1.Company = "Dc";
    //   employee1.Age = 18;
    //   employee1.introduction();
}
