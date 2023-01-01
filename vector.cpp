#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    vector<int> ::iterator it; // use when we need to use insert function
    //push data
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    //insert data
    nums.insert(it=nums.begin()+2, 8);

    for (int i = 0; i< nums.size(); i++){
        cout << nums[i] <<endl;
    }

    //update data
    nums.at(1) = 22;
    //delete data 
    nums.erase(nums.begin()+2);

    cout << "After deleting and updating data from vector" << endl;
    for (int i = 0; i< nums.size(); i++){
        cout << nums[i] <<endl;
    }

}