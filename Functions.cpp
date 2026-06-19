/*
==========================================================
            C++ FUNCTIONS DEMONSTRATION
==========================================================

Topics Covered:

1. Function Prototype
2. No Argument No Return
3. Argument No Return
4. No Argument Return
5. Argument Return
6. Default Arguments
7. Inline Function
8. Function Overloading
9. Recursion
10. Call By Value
11. Call By Reference
12. Constant Parameter
13. Return By Reference
14. Lambda Function

==========================================================
*/

#include <iostream>
using namespace std;

// ==================================================
// FUNCTION PROTOTYPES
// ==================================================

void greet();

void printSum(int a, int b);

int getNumber();

int multiply(int a, int b);

int power(int base, int exponent = 2);

inline int square(int n);

int add(int a, int b);
double add(double a, double b);

int factorial(int n);

void callByValue(int x);

void callByReference(int &x);

void printValue(const int &x);

int& returnReference(int arr[], int index);

// ==================================================
// MAIN
// ==================================================

int main()
{
    // ==============================================
    // NO ARGUMENT NO RETURN
    // ==============================================

    greet();

    // ==============================================
    // ARGUMENT NO RETURN
    // ==============================================

    printSum(10,20);

    // ==============================================
    // NO ARGUMENT RETURN
    // ==============================================

    cout << "Returned Value : "
         << getNumber()
         << endl;

    // ==============================================
    // ARGUMENT RETURN
    // ==============================================

    cout << "Multiplication : "
         << multiply(10,20)
         << endl;

    // ==============================================
    // DEFAULT ARGUMENT
    // ==============================================

    cout << "Power : "
         << power(5)
         << endl;

    cout << "Power : "
         << power(2,3)
         << endl;

    // ==============================================
    // INLINE FUNCTION
    // ==============================================

    cout << "Square : "
         << square(6)
         << endl;

    // ==============================================
    // FUNCTION OVERLOADING
    // ==============================================

    cout << "Add Integers : "
         << add(10,20)
         << endl;

    cout << "Add Doubles : "
         << add(10.5,20.5)
         << endl;

    // ==============================================
    // RECURSION
    // ==============================================

    cout << "Factorial : "
         << factorial(5)
         << endl;

    // ==============================================
    // CALL BY VALUE
    // ==============================================

    int a = 10;

    callByValue(a);

    cout << "After Call By Value : "
         << a
         << endl;

    // ==============================================
    // CALL BY REFERENCE
    // ==============================================

    callByReference(a);

    cout << "After Call By Reference : "
         << a
         << endl;

    // ==============================================
    // CONST PARAMETER
    // ==============================================

    printValue(a);

    // ==============================================
    // RETURN BY REFERENCE
    // ==============================================

    int arr[3] = {10,20,30};

    returnReference(arr,1) = 100;

    cout << "Modified Array Value : "
         << arr[1]
         << endl;

    // ==============================================
    // LAMBDA FUNCTION
    // ==============================================

    auto lambda =
    [](int x, int y)
    {
        return x + y;
    };

    cout << "Lambda Result : "
         << lambda(5,10)
         << endl;

    return 0;
}

// ==================================================
// FUNCTION DEFINITIONS
// ==================================================

void greet()
{
    cout << "Hello World" << endl;
}

void printSum(int a, int b)
{
    cout << "Sum : "
         << a+b
         << endl;
}

int getNumber()
{
    return 100;
}

int multiply(int a, int b)
{
    return a*b;
}

int power(int base, int exponent)
{
    int result = 1;

    for(int i=0;i<exponent;i++)
    {
        result *= base;
    }

    return result;
}

inline int square(int n)
{
    return n*n;
}

int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a+b;
}

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;

    return n * factorial(n-1);
}

void callByValue(int x)
{
    x = 100;
}

void callByReference(int &x)
{
    x = 100;
}

void printValue(const int &x)
{
    cout << "Const Value : "
         << x
         << endl;
}

int& returnReference(int arr[], int index)
{
    return arr[index];
}