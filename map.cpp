#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,string> mc;
    map<int,string> :: iterator mclass;

    mc [1] = "Thu Ra";
    mc [10] = "Min Khant";
    mc [14] = "Aung Tun Kyaw";
    mc [28] = "Ye Min Tun";
    mc.insert(make_pair(33, "Min Khant Aung Soe"));

    for (mclass =mc.begin(); mclass != mc.end(); ++mclass){
        cout << "Mechatronic - Roll " << mclass->first << " ";
        cout << mclass->second << endl;
    }

}