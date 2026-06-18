#include <iostream>
#include <set>
using namespace std;

int main()
{
    // ==================================================
    // CREATION
    // ==================================================

    set<int> mySet;

    // ==================================================
    // INSERTION
    // ==================================================

    mySet.insert(40);
    mySet.insert(10);
    mySet.insert(30);
    mySet.insert(20);
    mySet.insert(50);

    // Duplicate Value (Ignored)
    mySet.insert(20);

    // Emplace
    mySet.emplace(60);

    // ==================================================
    // SIZE
    // ==================================================

    cout << "Size of Set : "
         << mySet.size()
         << endl;

    // ==================================================
    // EMPTY
    // ==================================================

    if(mySet.empty())
    {
        cout << "Set is Empty" << endl;
    }
    else
    {
        cout << "Set is NOT Empty" << endl;
    }

    // ==================================================
    // TRAVERSAL USING RANGE-BASED LOOP
    // ==================================================

    cout << "\nTraversal (Range-Based Loop)\n";

    for(int value : mySet)
    {
        cout << value << " ";
    }
    cout << endl;

    // ==================================================
    // FIND
    // ==================================================

    auto setIt = mySet.find(30);

    if(setIt != mySet.end())
    {
        cout << "\nElement Found : "
             << *setIt
             << endl;
    }
    else
    {
        cout << "\nElement Not Found"
             << endl;
    }

    // ==================================================
    // COUNT
    // ==================================================

    cout << "\nCount of 20 : "
         << mySet.count(20)
         << endl;

    cout << "Count of 100 : "
         << mySet.count(100)
         << endl;

    // ==================================================
    // TRAVERSAL USING ITERATOR
    // ==================================================

    cout << "\nTraversal (Iterator)\n";

    for(auto it = mySet.begin();
        it != mySet.end();
        it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // ==================================================
    // REVERSE TRAVERSAL
    // ==================================================

    cout << "\nReverse Traversal\n";

    for(auto it = mySet.rbegin();
        it != mySet.rend();
        it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // ==================================================
    // LOWER BOUND
    // First element >= given value
    // ==================================================

    auto lb = mySet.lower_bound(25);

    if(lb != mySet.end())
    {
        cout << "\nLower Bound of 25 : "
             << *lb
             << endl;
    }

    // ==================================================
    // UPPER BOUND
    // First element > given value
    // ==================================================

    auto ub = mySet.upper_bound(30);

    if(ub != mySet.end())
    {
        cout << "Upper Bound of 30 : "
             << *ub
             << endl;
    }

    // ==================================================
    // ERASE BY VALUE
    // ==================================================

    mySet.erase(20);

    cout << "\nAfter Erasing 20\n";

    for(int value : mySet)
    {
        cout << value << " ";
    }
    cout << endl;

    // ==================================================
    // ERASE BY ITERATOR
    // ==================================================

    auto eraseIt = mySet.find(40);

    if(eraseIt != mySet.end())
    {
        mySet.erase(eraseIt);
    }

    cout << "\nAfter Erasing 40 Using Iterator\n";

    for(int value : mySet)
    {
        cout << value << " ";
    }
    cout << endl;

    // ==================================================
    // SWAP
    // ==================================================

    set<int> anotherSet;

    anotherSet.insert(100);
    anotherSet.insert(200);

    mySet.swap(anotherSet);

    cout << "\nAfter Swap\n";

    for(int value : mySet)
    {
        cout << value << " ";
    }
    cout << endl;

    // ==================================================
    // CLEAR
    // ==================================================

    mySet.clear();

    cout << "\nSize After Clear : "
         << mySet.size()
         << endl;

    // ==================================================
    // EMPTY CHECK AFTER CLEAR
    // ==================================================

    if(mySet.empty())
    {
        cout << "Set is Empty Now" << endl;
    }

    return 0;
}
