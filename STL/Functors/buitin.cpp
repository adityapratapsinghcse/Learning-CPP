#include <iostream>
#include <functional>
using namespace std;

int main()
{
    // ==================================================
    // ARITHMETIC FUNCTORS
    // ==================================================

    cout << "plus<int>() : "
         << plus<int>()(10,20)
         << endl;

    cout << "minus<int>() : "
         << minus<int>()(20,10)
         << endl;

    cout << "multiplies<int>() : "
         << multiplies<int>()(10,20)
         << endl;

    cout << "divides<int>() : "
         << divides<int>()(20,10)
         << endl;

    cout << "modulus<int>() : "
         << modulus<int>()(20,3)
         << endl;

    cout << "negate<int>() : "
         << negate<int>()(10)
         << endl;

    // ==================================================
    // COMPARISON FUNCTORS
    // ==================================================

    cout << "\ngreater<int>() : "
         << greater<int>()(20,10)
         << endl;

    cout << "less<int>() : "
         << less<int>()(20,10)
         << endl;

    cout << "greater_equal<int>() : "
         << greater_equal<int>()(20,20)
         << endl;

    cout << "less_equal<int>() : "
         << less_equal<int>()(20,20)
         << endl;

    cout << "equal_to<int>() : "
         << equal_to<int>()(10,10)
         << endl;

    cout << "not_equal_to<int>() : "
         << not_equal_to<int>()(10,20)
         << endl;

    // ==================================================
    // LOGICAL FUNCTORS
    // ==================================================

    cout << "\nlogical_and<bool>() : "
         << logical_and<bool>()(true,true)
         << endl;

    cout << "logical_or<bool>() : "
         << logical_or<bool>()(false,true)
         << endl;

    cout << "logical_not<bool>() : "
         << logical_not<bool>()(true)
         << endl;

    return 0;
}
