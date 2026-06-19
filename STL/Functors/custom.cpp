#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// ==================================================
// CUSTOM FUNCTOR 1
// ==================================================

class MultiplyByTwo
{
public:

    void operator()(int value)
    {
        cout << value * 2 << " ";
    }
};

// ==================================================
// CUSTOM FUNCTOR 2
// ==================================================

class Add
{
public:

    int operator()(int a, int b)
    {
        return a + b;
    }
};

// ==================================================
// CUSTOM COMPARATOR
// ==================================================

class DescendingOrder
{
public:

    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    // ==============================================
    // Functor behaving like function
    // ==============================================

    Add add;

    cout << "Addition : "
         << add(10,20)
         << endl;

    // ==============================================
    // Functor with for_each()
    // ==============================================

    vector<int> numbers =
    {
        10,20,30,40,50
    };

    cout << "\nMultiply By Two:\n";

    for_each(
        numbers.begin(),
        numbers.end(),
        MultiplyByTwo()
    );

    cout << endl;

    // ==============================================
    // Functor with sort()
    // ==============================================

    vector<int> values =
    {
        40,10,50,20,30
    };

    sort(
        values.begin(),
        values.end(),
        DescendingOrder()
    );

    cout << "\nDescending Sort:\n";

    for(int value : values)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}