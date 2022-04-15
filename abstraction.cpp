#include <iostream>
using namespace std;
using std::string;
class AbstractEmployee{ // The contract 
 virtual void Askforpromotion()=0;
};
class Employee: AbstractEmployee // declearing contract 
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
    void Askforpromotion(){
     if (Age>30)
     cout<<Name<<" got promoted"<<endl;
     else
     cout<<Name <<" sorry no promotion for you"<<endl;
    }
};
int main()
{
    Employee employee1 = Employee("levi", "Dc", 31);
    employee1.introduction();
   // employee1.setName("Sandra");
    cout<<employee1.getName()<<"\n";
    //   employee1.Name = "levi";
    //   employee1.Company = "Dc";
    //   employee1.Age = 18;
    //   employee1.introduction();
    employee1.Askforpromotion();
    

}
