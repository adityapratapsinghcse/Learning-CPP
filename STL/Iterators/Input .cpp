#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    cout << "Enter an Integer: ";

    // ==================================================
    // CREATION OF INPUT ITERATOR
    // ==================================================

    istream_iterator<int> inputIt(cin);

    // ==================================================
    // DEREFERENCE OPERATOR
    // ==================================================

    cout << "\nCurrent Value : "<< *inputIt<< endl;

    /*
    ==================================================
    INPUT ITERATOR SUPPORTS
    ==================================================
    */

    // --------------------------------------------------
    // 1. PRE-INCREMENT
    // --------------------------------------------------

    ++inputIt;
    cout << "Moved Forward Using ++it"
         << endl;

    // --------------------------------------------------
    // 2. POST-INCREMENT
    // --------------------------------------------------

    inputIt++;
    cout << "Moved Forward Using it++"
         << endl;

    // --------------------------------------------------
    // 3. COMPARISON
    // --------------------------------------------------

    istream_iterator<int> endIt;

    if(inputIt != endIt){
        cout << "Iterator is Valid"
             << endl;
    }

    /*
    ==================================================
    THINGS INPUT ITERATOR CANNOT DO
    ==================================================
    */

    // --------------------------------------------------
    // 1. CANNOT MOVE BACKWARD
    // --------------------------------------------------

    // --inputIt;       // ERROR

    /*
    Reason:
    Input Iterator is forward only.
    */

    // --------------------------------------------------
    // 2. CANNOT JUMP POSITIONS
    // --------------------------------------------------

    // inputIt + 2;     // ERROR

    /*
    Reason:
    No random access support.
    */

    // --------------------------------------------------
    // 3. CANNOT MOVE BACKWARD N STEPS
    // --------------------------------------------------

    // inputIt - 2;     // ERROR

    /*
    Reason:
    No arithmetic operations.
    */

    // --------------------------------------------------
    // 4. CANNOT USE INDEXING
    // --------------------------------------------------

    // inputIt[2];      // ERROR

    /*
    Reason:
    Not an array-like iterator.
    */

    // --------------------------------------------------
    // 5. CANNOT COMPARE ORDER
    // --------------------------------------------------

    // inputIt < endIt; // ERROR

    /*
    Reason:
    Only == and != supported.
    */

    // --------------------------------------------------
    // 6. NO REVERSE MOVEMENT
    // --------------------------------------------------

    // prev(inputIt);   // Generally not supported

    return 0;
}