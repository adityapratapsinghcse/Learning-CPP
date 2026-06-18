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

    return 0;

}