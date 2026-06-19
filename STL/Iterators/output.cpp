#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    // ==================================================
    // OUTPUT ITERATOR USING ostream_iterator
    // ==================================================

    ostream_iterator<int> outputIt(cout, " ");

    // ==================================================
    // WRITING VALUES
    // ==================================================

    *outputIt = 10;
    *outputIt = 20;
    *outputIt = 30;

    cout << endl;

    /*
    ==================================================
    OUTPUT ITERATOR SUPPORTS
    ==================================================
    */

    // --------------------------------------------------
    // 1. ASSIGNMENT
    // --------------------------------------------------

    *outputIt = 100;

    cout << endl;

    // --------------------------------------------------
    // 2. PRE-INCREMENT
    // --------------------------------------------------

    ++outputIt;

    // --------------------------------------------------
    // 3. POST-INCREMENT
    // --------------------------------------------------

    outputIt++;

    /*
    ==================================================
    OUTPUT ITERATOR CANNOT DO
    ==================================================
    */

    // --------------------------------------------------
    // 1. CANNOT READ VALUE
    // --------------------------------------------------

    // int x = *outputIt;     // ERROR

    /*
    Reason:
    Output Iterators are write-only.
    */

    // --------------------------------------------------
    // 2. CANNOT MOVE BACKWARD
    // --------------------------------------------------

    // --outputIt;           // ERROR

    /*
    Reason:
    Forward movement only.
    */

    // --------------------------------------------------
    // 3. CANNOT JUMP
    // --------------------------------------------------

    // outputIt + 2;         // ERROR

    /*
    Reason:
    No random access.
    */

    // --------------------------------------------------
    // 4. CANNOT INDEX
    // --------------------------------------------------

    // outputIt[2];          // ERROR

    /*
    Reason:
    Not array-like.
    */

    // --------------------------------------------------
    // 5. CANNOT COMPARE
    // --------------------------------------------------

    // outputIt == other;    // Generally not supported

    /*
    Output Iterators are intended only
    for sequential writing.
    */

    cout << "\n\n";

    // ==================================================
    // PRACTICAL EXAMPLE USING back_inserter
    // ==================================================

    vector<int> nums;

    auto backIt = back_inserter(nums);

    *backIt = 10;
    *backIt = 20;
    *backIt = 30;

    cout << "Vector Elements : ";

    for(int value : nums)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}
