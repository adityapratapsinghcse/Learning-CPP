#include <iostream>
#include <algorithm>
#include <numeric>
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
    for(auto it = myArray.begin() ; it != myArray.end(); it++){
        cout << *it << " ";
    }
    cout <<endl;

    // Acumulator Algorithm : Computes the SUm  of Eleemtns on Given Range
    
    int sum = accumulate(myArray.begin(),myArray.end(),0);
    cout << "Sum of all Elemets is: " << sum << endl; 

    vector<int> first = {1,2,3};
    vector<int> second = {3,4,5};

    //Inner Product Algorithm: Computes the Inner Product of two ranges
    
    int ans2 = inner_product(first.begin(),first.end(),second.begin(),0);
    cout << "The Inner Prodcut of Given Values are : " << ans2 << endl;

    //Partial Sum : Computes the Partial Sum of Range

    vector<int> result (first.size());
    partial_sum(first.begin(),first.end(),result.begin());
    cout << "The Partial sum is: ";
    for(auto it = result.begin() ; it != result.end(); it++){
        cout << *it << " ";
    }
    cout <<endl;   

    // IOTA Algorithm: Fills the Range With Incrementing Values 

    iota(first.begin(),first.end(),250);
    cout << "After Filling with Iota: ";
    for(auto it = first.begin() ; it != first.end(); it++){
        cout << *it << " ";
    }
    cout <<endl;

    return 0;
}