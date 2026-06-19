#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 

int main(){
    
    vector<int> myHeap = {20, 10, 40, 30, 50};
    cout << "Original Vector:\n"; 
    for(int value : myHeap) { 
        cout << value << " "; 
    } 
    cout << endl;
    
    
    // Heapifying the Vector

    make_heap(myHeap.begin(),myHeap.end());
    cout << "After Heap:\n"; 
    for(int value : myHeap) { 
        cout << value << " "; 
    } 
    cout << endl;
    
    //Cheking the Top Element in Max-Heap

    cout << "The Top Element is :"<< myHeap.front() << endl;

    // Cheking given is Heap or Not 

    bool ans = is_heap(myHeap.begin(),myHeap.end());    
    cout << "\nIs Heap : " << ans << endl;
    

    // Pushing An Element into Heap

    myHeap.push_back(60); 
    cout << "Normal Pushback\n " ;
    for(int value : myHeap) { 
        cout << value << " "; 
    } 
    cout << endl;
    push_heap( myHeap.begin(), myHeap.end() ); 
    cout << "\nAfter push_heap(60):\n"; 
    for(int value : myHeap) { 
        cout << value << " "; 
    } 
    cout << endl;

    //Popping An Element fromt he Heap
    pop_heap( myHeap.begin(), myHeap.end() ); 
    cout << "\nAfter pop_heap():\n"; 
    for(int value : myHeap) { 
        cout << value << " "; 
    } 
    cout << endl; 
    cout << "Removed Element : " << myHeap.back() << endl; 
    myHeap.pop_back();


    //Sorting the Heap
    sort_heap( myHeap.begin(), myHeap.end() ); 
    cout << "\nAfter sort_heap():\n"; 
    for(int value : myHeap) { 
        cout << value << " "; 
    } 
    cout << endl;

    return 0;
}