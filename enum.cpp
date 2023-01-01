#include <iostream>
using namespace std;

int main(){
    enum class colors {RED, GREEN, BLUE};
    //enum is used for constant direction or value
    colors choose = colors::RED;
    switch (choose)
    {
    case colors::RED:
        cout << "You choose red color" << endl;
        break;
    case colors::GREEN:
        cout << "You choose green color" << endl;
        break;
    case colors::BLUE:
        cout << "You choose blue color" << endl;
        break;
    
    }
}