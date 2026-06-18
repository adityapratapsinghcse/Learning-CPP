#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 

int main(){
    
    vector<int> myArray;

    myArray.push_back(40);
    myArray.push_back(20);
    myArray.push_back(30);
    myArray.push_back(40);
    myArray.push_back(10);
    
    sort(myArray.begin(),myArray.end());
    cout << "Intial Array: " ;
    for(auto it = myArray.begin() ; it != myArray.end(); it++){
        cout << *it << " ";
    }
    cout <<endl;

    int ans = min(10,20);
    cout << "The Minimum of two is : "<<ans<<endl;

    int ans2 = max(10,20);
    cout << "The Maximum of two is : "<<ans2<<endl;

    //Min Algorithm 
    auto ans3 = min_element(myArray.begin(),myArray.end());
    cout << "The Minimum In this Range is : "<< *ans3<<endl;

    //Max Algorithm

    auto ans4 = max_element(myArray.begin(),myArray.end());
    cout << "The Maximum In this Range is : "<< *ans4<<endl;
    return 0;
}