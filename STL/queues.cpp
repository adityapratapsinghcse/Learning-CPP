    #include <iostream>
    #include <queue>
    using namespace std;

    int main(){
        //Creation
        queue<int> myQueue;
        
        //Insertion
        myQueue.push(10); // Inserts Element at Rear End
        myQueue.push(10);
        myQueue.push(20);
        myQueue.push(30);
        myQueue.push(40);
        myQueue.push(50);
        myQueue.push(60);
        
        // Deletion
        myQueue.pop(); // Removes Element From Front End

        // Check Front and Back
        int starting = myQueue.front();
        cout << "The First Element Fetched using .front() is : " << starting <<endl;

        int ending = myQueue.back();
        cout << "The Last Element Fetched using .back() is : " << ending <<endl;

        //Check Size 
        int size = myQueue.size();
        cout << "The Size of The Queue is : "<< size << endl;

        //Check Empty
        if(myQueue.empty() == true){
            cout << "Queue is Empty Now"<< endl;
        }else{
            cout << "Queue is not Empty "<< endl;
        }

        // Traversing a Queue

        while(!myQueue.empty()){
            cout << myQueue.front() << " ";
            myQueue.pop();
        }
        cout << endl;

        //Check Empty
        if(myQueue.empty() == true){
            cout << "Queue is Empty Now"<< endl;
        }else{
            cout << "Queue is not Empty "<< endl;
        }
        return 0;
    }