#include <iostream>
using namespace std;

class Parent{
    private:
        string name;
    public:
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
};

class Child : public Parent{
    private:
        int age;
    public:
        void setAge(int age){
            this->age = age;
        }
        int getAge(){
            return this->age;
        }
};

int main(){
    Child *child_obj = new Child;
    child_obj->setAge(18);
    child_obj->setName("Min Khant");

    cout << "Name :" << child_obj->getName() << endl;
    cout << "Age :" << child_obj->getAge() << endl;

    return 0;
}