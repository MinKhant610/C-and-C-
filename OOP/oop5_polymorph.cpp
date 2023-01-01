#include <iostream>
using namespace std;

class Animal{
    public:
        void animalSound(){
            cout << "animal make sound" << endl;
        }
};

class Dog : public Animal{
    public:
        void animalSound(){
            cout << "Bak Bak !!" << endl;
        }
};

class Pig : public Animal{
    public:
        void animalSound(){
            cout << "Pee Pee " << endl;
        }
};

int main(){
    Animal *animal_obj = new Animal;
    Dog *dog_obj = new Dog;
    Pig *pig_obj = new Pig;

    animal_obj->animalSound();
    dog_obj->animalSound();

    return 0;
}