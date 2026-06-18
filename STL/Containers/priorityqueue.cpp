#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

    // ==========================
    // MAX HEAP (Default)
    // ==========================
    priority_queue<int> maxHeap;

    // Insertion
    maxHeap.push(40);
    maxHeap.push(10);
    maxHeap.push(50);
    maxHeap.push(20);
    maxHeap.push(30);

    // Emplace
    maxHeap.emplace(60);

    // Top Element
    cout << "Top Element (Largest) : "
         << maxHeap.top() << endl;

    // Size
    cout << "Size : "
         << maxHeap.size() << endl;

    // Empty Check
    if(maxHeap.empty()){
        cout << "Priority Queue is Empty" << endl;
    }
    else{
        cout << "Priority Queue is not Empty" << endl;
    }

    // Traversal
    cout << "\nElements of Max Heap : ";

    priority_queue<int> tempMax = maxHeap;

    while(!tempMax.empty()){
        cout << tempMax.top() << " ";
        tempMax.pop();
    }
    cout << endl;

    // ==========================
    // MIN HEAP
    // ==========================
    priority_queue<int,vector<int>,greater<int>> minHeap;

    minHeap.push(40);
    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(20);
    minHeap.push(30);

    cout << "\nTop Element of Min Heap (Smallest) : "
         << minHeap.top() << endl;

    cout << "Elements of Min Heap : ";

    priority_queue<int,vector<int>,greater<int>> tempMin = minHeap;

    while(!tempMin.empty()){
        cout << tempMin.top() << " ";
        tempMin.pop();
    }
    cout << endl;

    // ==========================
    // Swap
    // ==========================
    priority_queue<int> pq1;
    priority_queue<int> pq2;

    pq1.push(10);
    pq1.push(20);

    pq2.push(100);
    pq2.push(200);

    pq1.swap(pq2);

    cout << "\nAfter Swap :" << endl;

    cout << "pq1 Top : "
         << pq1.top() << endl;

    cout << "pq2 Top : "
         << pq2.top() << endl;

    // ==========================
    // Deletion
    // ==========================
    cout << "\nDeleting Elements : ";

    while(!maxHeap.empty()){
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }

    cout << endl;

    // Final Empty Check
    if(maxHeap.empty()){
        cout << "Priority Queue is Empty Now" << endl;
    }

    return 0;
}