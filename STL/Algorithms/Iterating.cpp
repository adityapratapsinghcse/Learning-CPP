#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void printDouble(int a){
    cout << 2*a << " "; 
}
bool find_even(int a){
    return a%2==0;
}
bool find_odd(int a){
    return a%2 !=0;
}
int main(){

    //For Each Algorithm : Applies a function to each element in range

    vector<int> myArray;
    myArray.push_back(40);
    myArray.push_back(20);
    myArray.push_back(30);
    myArray.push_back(40);
    myArray.push_back(10);
    myArray.push_back(7);
    
    cout<< "Original Array :- "<<endl;
    for(auto it = myArray.begin() ; it!=myArray.end() ; it++){
        cout << *it << " ";
    } 

    cout<< "\nAfter for_each Array :- "<<endl;
    for_each(myArray.begin(),myArray.end(),printDouble);
 
    //Find Algorithm : Serches for Specific Element
    int target =20;
    auto pos = find(myArray.begin(),myArray.end(),target) ;
    cout << "\nFound : "<< *pos << endl; 

    //Find_if Algorithm : Serches for First Element based on Fucntion
    auto it = find_if(myArray.begin(),myArray.end(),find_even);
    cout << "\nThe Element is :"<<*it << endl;

    //Count Alogorithm : Count the Occurances Of Value in a Range
    int find = 10;
    int ans = count(myArray.begin(),myArray.end(),find);
    cout << "\nThe Occurances of "<< find << " is : "<< ans <<endl; 

    //Find_if Algorithm : Counts ELemets That Satisfy the GIven Function
    int answer = count_if(myArray.begin(),myArray.end(),find_odd);
    cout << "\nThe Elements Count are : "<< answer << endl;
    
    //Sort Algorithm : Sort the Elements in Asceding order (default)
    
    cout << "\nBefore Sorting:-" << endl;    
    vector<int>:: iterator i = myArray.begin();
    while(i != myArray.end()){
        cout << *i << " ";
        i++;
    }
    
    sort(myArray.begin(),myArray.end());  
    
    cout << "\nAfter Sorting:-" << endl;  
    vector<int>:: iterator j = myArray.begin();
    while(j != myArray.end()){
        cout << *j << " ";
        j++;
    }
    cout << endl;

    //Reverse Algorithm :: Reverse the Order of Elemets in The Ginve Range

    cout << "\nBefore Reversing:-" << endl;    
    vector<int>:: iterator k = myArray.begin();
    while(k != myArray.end()){
        cout << *k << " ";
        k++;
    }
    
    reverse(myArray.begin(),myArray.end());  
    
    cout << "\nAfter Reversing:-" << endl;  
    vector<int>:: iterator l = myArray.begin();
    while(l != myArray.end()){
        cout << *l << " ";
        l++;
    }
    cout << endl;

    //Rotate Algorithm: Rotates Elements in Range
    
    cout << "\nBefore Rotating:-" << endl;    
    vector<int>:: iterator n = myArray.begin();
    while(n != myArray.end()){
        cout << *n << " ";
        n++;
    }

    rotate(myArray.begin(),myArray.begin()+3,myArray.end());  
    cout << "\nAfter Rotating:-" << endl;  
    vector<int>:: iterator m = myArray.begin();
    while(m != myArray.end()){
        cout << *m << " ";
        m++;
    }
    cout << endl;

    // Unique Alogrithm: Remove the Duplicates Elemts From a Sorted Range
    sort(myArray.begin(),myArray.end());  

    auto remove = unique(myArray.begin(),myArray.end());
    myArray.erase(remove,myArray.end());
    cout << "\nAfter Removing Duplicates:-" << endl;  
    vector<int>:: iterator o = myArray.begin();
    while(o != myArray.end()){
        cout << *o << " ";
        o++;
    }
    cout << endl;

    //Partition Algorithm : Divdes the Algorithm into two groups based on fucntion

    auto part = partition(myArray.begin(),myArray.end(),find_even);
    cout << "\nAfter Removing Partioning:-" << endl;  
    vector<int>:: iterator p = myArray.begin();
    while(p != myArray.end()){
        cout << *p << " ";
        p++;
    }
    return 0;
}