#include <iostream>
using namespace std;
using std:: string; 

class Employee {
    public:
    string Name;
    string Company;
    int Age;
    void introduction(){
    cout<<"I am "<<Name <<" I work in "<< Company <<" and my age is "<<Age<<endl;
    }
};
int main(){
    Employee employee1;
  employee1.Name = "levi";
  employee1.Company = "Dc";
  employee1.Age = 18;
  employee1.introduction();


}
