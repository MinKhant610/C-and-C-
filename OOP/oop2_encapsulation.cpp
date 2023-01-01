#include <iostream>
using namespace std;

class Product{
    private:
        int id;
        string name;
        float price;
    
    public:
        void setProduct(int id, string name, float price){
            this->id = id;
            this->name = name;
            this->price = price;
        }
        int getId(){
            return this->id;
        }
        string getName(){
            return this->name;
        }
        float getPrice(){
            return this->price;
        }

};

int main(){
    Product *product = new Product();
    product->setProduct(1, "pan", 500);
    cout << "Id :" << product->getId() << endl;
    cout << "Name :" << product->getName() << endl;
    cout << "Price :" << product->getPrice() << endl;
    cout << endl;
}