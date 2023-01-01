#include <iostream>
using namespace std;

int main(){
    int val = 5;
    int *ptr;
    
    cout << "value => " << val << endl;
    cout << "address of vale => " << &val << endl;

    ptr = &val;
    cout << "ptr real address =>" << &ptr << endl;
    cout << "pointer reference value &val => " << ptr << endl;
    cout << "pointer value (val) => " << *ptr << endl;
    
    int **ptr2;
    ptr2 = &ptr;
    cout << "ptr2 address => " << &ptr2 << endl;
    cout << "ptr address (store in ptr2) => " << ptr2 << endl;
    cout << "val address (store in ptr2) " << *ptr2 << endl;
    cout << "ptr store value => " << **ptr2 << endl;

    return 0;
}