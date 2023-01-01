#include <iostream>
using namespace std;

class Student{
    private :
        int id;
        string name;
        string city;
    
    public :
        Student(int id, string name, string city){
            this->id = id ;
            this->name = name;
            this->city =  city;
        }

        //copy constructor;
        Student(Student &obj){
            this->id = obj.id;
            this->name = obj.name;
            this->city = obj.city;
        }
        void print_data(){
            cout << "-----------------------" << endl;
            cout << "Id :" << id << endl;
            cout << "name :" << name << endl;
            cout << "city :" << city << endl;
            cout << "-----------------------" << endl;
        }
};

int main (){
    // Student student_obj; or
    Student *student_obj = new Student(1, "Min Khant", "Yangon");
    student_obj->print_data();

    Student *copy_constructor;
    copy_constructor = student_obj;
    copy_constructor->print_data();
    return 0;
}