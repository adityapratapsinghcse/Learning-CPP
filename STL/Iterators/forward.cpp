#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    // ==================================================
    // CREATION
    // ==================================================

    forward_list<int> numbers =
    {
        10,20,30,40,50
    };

    // ==================================================
    // ITERATOR CREATION
    // ==================================================

    forward_list<int>::iterator it;

    // ==================================================
    // TRAVERSAL
    // ==================================================

    cout << "Traversal : ";

    for(it = numbers.begin();
        it != numbers.end();
        ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    // ==================================================
    // READING DATA
    // ==================================================

    it = numbers.begin();

    cout << "\nCurrent Value : "
         << *it
         << endl;

    // ==================================================
    // WRITING DATA
    // ==================================================

    *it = 100;

    cout << "After Modification : "
         << *it
         << endl;

    // ==================================================
    // PRE-INCREMENT
    // ==================================================

    ++it;

    cout << "After ++it : "
         << *it
         << endl;

    // ==================================================
    // POST-INCREMENT
    // ==================================================

    it++;

    cout << "After it++ : "
         << *it
         << endl;

    // ==================================================
    // MULTIPLE PASSES
    // ==================================================

    cout << "\nFirst Pass : ";

    for(auto itr = numbers.begin();
        itr != numbers.end();
        ++itr)
    {
        cout << *itr << " ";
    }

    cout << endl;

    cout << "Second Pass : ";

    for(auto itr = numbers.begin();
        itr != numbers.end();
        ++itr)
    {
        cout << *itr << " ";
    }

    cout << endl;

    /*
    ==================================================
    THINGS FORWARD ITERATOR CANNOT DO
    ==================================================
    */

    // --------------------------------------------------
    // 1. CANNOT MOVE BACKWARD
    // --------------------------------------------------

    // --it;      // ERROR

    /*
    Forward movement only.
    */

    // --------------------------------------------------
    // 2. CANNOT JUMP
    // --------------------------------------------------

    // it + 2;    // ERROR

    /*
    No random access.
    */

    // --------------------------------------------------
    // 3. CANNOT MOVE BACKWARD N STEPS
    // --------------------------------------------------

    // it - 2;    // ERROR

    /*
    Not supported.
    */

    // --------------------------------------------------
    // 4. CANNOT USE INDEXING
    // --------------------------------------------------

    // it[2];     // ERROR

    /*
    Not array-like.
    */

    // --------------------------------------------------
    // 5. CANNOT COMPARE ORDER
    // --------------------------------------------------

    // it < numbers.end();   // ERROR

    /*
    Only == and != supported.
    */

    cout << "\nFinal List : ";

    for(auto value : numbers)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}