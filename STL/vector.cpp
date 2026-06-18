#include <iostream>
// To Use Vector we need to inlcude its header file
#include <vector>

using namespace std;

int main(){

    // 1.  ****Creating  a Vector****
    
    // Way-1 :-
    vector<int> marks; // Creates a Array with name marks

    // Way-2 :-
    vector<int> miles(10); // Creates a Array of Starting Size of 10 Blocks

    // Way-3 :-
    vector<int> distance(15,0); // Creates a Array of 15 blocks and Each Initialised to 0

    // 2.   ****Insertion in Vector****
    //Tradiitonal --> distance[3] = 10; (operator[] way)

    // New Vector Way 
    marks.push_back(10); // This Inserts Elements at the End of Array
    marks.push_back(20);
    marks.push_back(40);
    marks.push_back(50);
    marks.push_back(60);

    //Insertion using "INSERT" at specified Index
    marks.insert(marks.begin()+2,30);

    // 3.   ****Deletion in Vector*****
    marks.pop_back(); //This Removes the Element fromt he End of the Array

    // 4.  ****Accesing of Elemets in Array****
    
    //Using Operator[]
    // int index = 1;
    // int value = marks[index];
    // cout << "The Value at the Given Index " << index <<" is : " << value << endl;

    // Using At() Operator
    int index = 2;
    int value = marks.at(index);
    cout << "The Value at the Given Index " << index <<" is : " << value << endl;


    // 5.  **** Travesel of Array ****
    
    // Way-1 : Using For or while loop
    cout << "Using For Loop ------->  ";
    for(int i=0 ; i < marks.size();i++){
        cout << marks[i] << " ";
    }
    cout << endl;

    cout << "Using While Loop ----->  ";
    int i =0;
    while(i < marks.size()){
        cout << marks[i] << " ";
        i++;
    }
    cout << endl;

    // Way-2 :Using For Each Loop
    cout << "Using For Each Loop -->  ";
    for(int i: marks){
        cout << i << " ";
    } 
    cout << endl;

    // Way-3 : Using Iterators
    cout << "Using Iterators ------>  ";
    vector<int>:: iterator it = marks.begin();
    while(it != marks.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;


    // 6.  ****Checking the Front and Last elements****

    int starting = marks.front();
    cout << "The First Element Fetched using .front() is : " << starting <<endl; 

    int ending = marks.back();
    cout << "The Last Element Fetched using .back() is : " << ending <<endl;
    
    // 7.  ****Cheking is the Vector is empty or not****

    if(marks.empty() == true){
        cout << "The Vector is Empty" << endl;
    }else{  
        cout << "The Vector is Not Empty" << endl;
    }

    //8. ****Checking the Capacity****
    
    int capacity = marks.capacity();
    cout << "The Capacity of this Vector is : " << capacity <<endl;

    //9.  ****Erasing Using "ERASE"****
    marks.erase(marks.begin(),marks.end());
    if(marks.empty() == true){
        cout << "The Vector is Empty After using Erase " << endl;
    }else{
        cout << "The Vector is Not Empty" << endl;
    }


    // 10.  Making of 2D Arrays

    //Syntax :  (Outer = Rows) and (Inner = Coloum) <vector<vector<int>> arr_name = (no_of_rows , vector<int>(no_of_coloums , initilization_With))
    vector<vector<int>> arr(5, vector<int>(4,0));
    int total_rows = arr.size();
    int total_coloums = arr[0].size();

    cout << "Total Rows : "<< total_rows << endl;
    cout << "Total Coloums : "<< total_coloums << endl;
    cout << "2D array is of : " << total_rows <<" * "<< total_coloums << " size"<<endl;
    return 0;
}