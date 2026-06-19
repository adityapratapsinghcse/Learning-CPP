#include <iostream>
#include <list>
using namespace std;

int main()
{
    // ==================================================
    // CREATION
    // ==================================================

    list<int> numbers =
    {
        10,20,30,40,50
    };

    // ==================================================
    // ITERATOR CREATION
    // ==================================================

    list<int>::iterator it;

    // ==================================================
    // TRAVERSAL FORWARD
    // ==================================================

    cout << "Forward Traversal : ";

    for(it = numbers.begin();
        it != numbers.end();
        ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    // ==================================================
    // READING
    // ==================================================

    it = numbers.begin();

    cout << "\nCurrent Value : "
         << *it
         << endl;

    // ==================================================
    // WRITING
    // ==================================================

    *it = 100;

    cout << "After Modification : "
         << *it
         << endl;

    // ==================================================
    // FORWARD MOVEMENT
    // ==================================================

    ++it;

    cout << "After ++it : "
         << *it
         << endl;

    // ==================================================
    // BACKWARD MOVEMENT
    // ==================================================

    --it;

    cout << "After --it : "
         << *it
         << endl;

    // ==================================================
    // MOVE TO LAST ELEMENT
    // ==================================================

    it = numbers.end();

    --it;

    cout << "\nLast Element : "
         << *it
         << endl;

    // ==================================================
    // REVERSE TRAVERSAL
    // ==================================================

    cout << "\nReverse Traversal : ";

    while(true)
    {
        cout << *it << " ";

        if(it == numbers.begin())
            break;

        --it;
    }

    cout << endl;

    // ==================================================
    // MULTIPLE PASSES
    // ==================================================

    cout << "\nSecond Traversal : ";

    for(auto itr = numbers.begin();
        itr != numbers.end();
        ++itr)
    {
        cout << *itr << " ";
    }

    cout << endl;

    /*
    ==================================================
    THINGS BIDIRECTIONAL ITERATOR CANNOT DO
    ==================================================
    */

    // --------------------------------------------------
    // 1. CANNOT JUMP FORWARD
    // --------------------------------------------------

    // it + 2;       // ERROR

    /*
    No random access support.
    */

    // --------------------------------------------------
    // 2. CANNOT JUMP BACKWARD
    // --------------------------------------------------

    // it - 2;       // ERROR

    /*
    Not supported.
    */

    // --------------------------------------------------
    // 3. CANNOT USE INDEXING
    // --------------------------------------------------

    // it[3];        // ERROR

    /*
    Not array-like.
    */

    // --------------------------------------------------
    // 4. CANNOT COMPARE ORDER
    // --------------------------------------------------

    // it < numbers.end();   // ERROR

    /*
    Only == and != supported.
    */

    // --------------------------------------------------
    // 5. CANNOT USE DISTANCE ARITHMETIC
    // --------------------------------------------------

    // numbers.begin() + 3;  // ERROR

    /*
    list iterators do not support arithmetic.
    */

    cout << "\nFinal List : ";

    for(auto value : numbers)
    {
        cout << value << " ";
    }

    cout << endl;
    return 0;
}
