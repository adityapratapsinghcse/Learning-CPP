#include <iostream>
#include <queue>
using namespace std;

int main(){

    //Creation
    deque<int> myDeque;

    //Insertion

    myDeque.push_back(20); // Adds Element To end of Deque
    myDeque.push_back(30);
    myDeque.push_back(40);
    myDeque.push_front(10); // Adds Element To front of Deque

    // Deletion
    myDeque.pop_back();  //Removes the Element from last of Deque
    myDeque.pop_front(); // Removes the Element from front of Deque


    //Cheking Th Front And Back 
    int front = myDeque.front();
    cout << "The Value at the Front of Deque is : " << front << endl;
    int back = myDeque.back();
    cout << "The Value at the Back of Deque is : " << back << endl;

    //Cheking the size
    int size = myDeque.size();
    cout << "The Size of Deque is : " << size << endl;

    //Cheking Empty
    if(myDeque.empty() == true){
        cout << "Deque is Empty" << endl;
    }else{
        cout << "Deque is not Empty" << endl;
    }

    // Cheking the Begin and End
    auto  begin = myDeque.begin();
    auto end = myDeque.end(); end--;
    cout << "The Element at the Beginning is : " << *begin << endl;
    cout << "The Element at the Ending is : " << *end << endl;


    //Using Operator[]
    //int index = 1;
    //int value = myDeque[index];
    //cout << "The Value at the Given Index " << index <<" is : " << value << endl;

    // Using At() Operator
    int index = 1;
    auto value = myDeque.at(index);
    cout << "The Value at the Given Index " << index <<" is : " << value << endl;


    // Traversal
    
    // Way-1 : Using For or while loop
    cout << "Using For Loop ------->  ";
    for(int i=0 ; i < myDeque.size();i++){
        cout << myDeque[i] << " ";
    }
    cout << endl;

    cout << "Using While Loop ----->  ";
    int i =0;
    while(i < myDeque.size()){
        cout << myDeque[i] << " ";
        i++;
    }
    cout << endl;

    // Way-2 :Using For Each Loop
    cout << "Using For Each Loop -->  ";
    for(int i: myDeque){
        cout << i << " ";
    } 
    cout << endl;

    // Way-3 Using the Iterator
    cout << "Using Iterator ------->  ";
    deque<int>::iterator it = myDeque.begin();
    while(it != myDeque.end()){
        cout << *it << " ";
        it++;
    }
    return 0;
}