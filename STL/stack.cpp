#include <iostream>
#include <stack>
using namespace std;

int main(){

    //Creation
    stack<int> myStack;

    //Insertion
    myStack.push(10); // Add element to Top of Stack (TOS)
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);

    // Deletion
    myStack.pop(); // Removes Element at the TOS
    
    // CHecking element at top of Stack
    int top = myStack.top();
    cout << "The Current Element at the Top of Stack is : " << top << endl;

    //CHeking the Size Of the Stack
    int size = myStack.size();
    cout << "The Size of the Stack is : " << size << endl;

    //Cheking its Empty or not
    if(myStack.empty() == true){
        cout << "Stack is Empty"<< endl;
    }else{
        cout << "Stack is not Empty"<< endl;
    }

    //Traversal Of the Stack
    while(!myStack.empty()){
        cout << myStack.top() << endl;
        myStack.pop();
    }

    //Swapping 
    stack<int> s1;
    stack<int> s2;

    s1.push(10);
    s1.push(20);
    s2.push(100);
    s2.push(200);
    s1.swap(s2); 

    //Traversal Of the Stack
    cout << "S1: ";
    while(!s1.empty()){
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    cout << "S2: ";
    while(!s2.empty()){
        cout << s2.top() << " ";
        s2.pop();
    }
    return 0;
}