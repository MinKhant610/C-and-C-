#include <iostream>
using namespace std;

class Employee {
    protected :
        int salary;
};

class Programmer : public Employee {
    public:
        void setSalary(int salary){
                this->salary = salary;
            }
        int getSalary(){
            return salary;
        }
};

int main(){
    Programmer *pro_obj = new Programmer;
    pro_obj->setSalary(1000);
    cout << "Salary :" << pro_obj->getSalary() << endl;

    return 0;
}