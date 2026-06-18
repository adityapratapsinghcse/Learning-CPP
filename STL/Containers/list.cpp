#include <iostream>
//To use the Linked List as STL list we need to Use this Header File
#include <list>
using namespace std;

int main(){

    //1. ****Creating a Linked List****
    list<int> myList;
    list<int> l2 = {10, 20, 30, 40};

    //2. ****INsertion in List****
    
    myList.push_back(20); // Inserts at the "end of list"
    myList.push_back(30); 
    myList.push_back(40); 
    myList.push_back(50);
    myList.push_back(50); 
    myList.push_front(10); // Inserts at the "start of list"
    myList.insert(myList.end(),60); // Inserts Element at Speciied Postion

    
    //3. ****Deletion in List****

    myList.pop_back(); //Removes First Element From list
    myList.pop_front(); //Removes Last Element From list

    // 4.  ****Checking the Front and Last elements****

    int starting = myList.front();
    cout << "The First Element Fetched using .front() is : " << starting <<endl; 

    int ending = myList.back();
    cout << "The Last Element Fetched using .back() is : " << ending <<endl;

    // Random Fun One ---->  myList.clear();

    //5.****Cheking is the List is empty or not****
    if(myList.empty() == true){
        cout << "The List is Empty" << endl;
    }else{
        cout << "The List is not Empty" << endl;
    }

    // Removing a a Specific Element Form List

    myList.remove(50);
    
    // ****Traversing the List ****

    // Way-1 :Using For Each Loop
    cout << "Using For Each Loop -->  ";
    for(int i: myList){
        cout << i << " ";
    } 
    cout << endl;

    // Way-2 : Using Iterators
    cout << "Using Iterators ------>  ";
    list<int>:: iterator it = myList.begin();
    while(it != myList.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;


    return 0;
}