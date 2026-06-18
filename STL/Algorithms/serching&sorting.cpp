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

    //Binary Search Algo : Checks the Value Exists in range
    int target =40;
    bool ans = binary_search(myArray.begin(),myArray.end(),target);
    if(ans == true){
        cout << target << " is Found in Given Array Range";
    }else{
        cout << target << " is not Found in Given Array Range";
    }
    cout << endl;
    //Lowerbound Algo :  
    int tofind =100;
    auto ans2 = lower_bound(myArray.begin(),myArray.end(),tofind);
    if(ans2 != myArray.end())
    {
        cout << "The Lower Bound of " << tofind <<  " is : " << *ans2 << endl;
    }
    else
    {
        cout << "No Lower Bound Found"<< endl;
    }
    
    //UpperBound Algo :  

    // int tofind =25;
    auto ans3 = upper_bound(myArray.begin(),myArray.end(),tofind);
    if(ans3 != myArray.end())
    {
        cout << "The Upper Bound of " << tofind <<  " is : " << *ans3 << endl;
    }
    else
    {
        cout << "No Upper Bound Found"<< endl;
    }

    // Stable Sort : Preserves relative order of equal elements.

    stable_sort(myArray.begin(),myArray.end());
    cout << "After Stable Sort : " ;
    for(auto it = myArray.begin() ; it != myArray.end(); it++){
        cout << *it << " ";
    }
    cout <<endl;
    return 0;
} 