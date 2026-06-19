/*
==========================================================
                RECURSION DEMONSTRATION
==========================================================

Definition:
-----------
Recursion is a technique where a function
calls itself.

Every recursive function must have:

1. Base Case
2. Recursive Case

==========================================================
*/

#include <iostream>
using namespace std;

// ==================================================
// 1. FACTORIAL
// ==================================================

int factorial(int n)
{
    // Base Case
    if(n == 0 || n == 1)
    {
        return 1;
    }

    // Recursive Case
    return n * factorial(n - 1);
}

// ==================================================
// 2. SUM OF N NATURAL NUMBERS
// ==================================================

int sumN(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n + sumN(n - 1);
}

// ==================================================
// 3. FIBONACCI
// ==================================================

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1)
         + fibonacci(n - 2);
}

// ==================================================
// 4. HEAD RECURSION
// Work after recursive call
// ==================================================

void headRecursion(int n)
{
    if(n == 0)
    {
        return;
    }

    headRecursion(n - 1);

    cout << n << " ";
}

// ==================================================
// 5. TAIL RECURSION
// Work before recursive call
// ==================================================

void tailRecursion(int n)
{
    if(n == 0)
    {
        return;
    }

    cout << n << " ";

    tailRecursion(n - 1);
}

// ==================================================
// 6. TREE RECURSION
// Two recursive calls
// ==================================================

void treeRecursion(int n)
{
    if(n == 0)
    {
        return;
    }

    cout << n << " ";

    treeRecursion(n - 1);

    treeRecursion(n - 1);
}

// ==================================================
// 7. INDIRECT RECURSION
// ==================================================

void funB(int);

void funA(int n)
{
    if(n <= 0)
    {
        return;
    }

    cout << n << " ";

    funB(n - 1);
}

void funB(int n)
{
    if(n <= 0)
    {
        return;
    }

    cout << n << " ";

    funA(n / 2);
}

// ==================================================
// 8. RECURSIVE BINARY SEARCH
// ==================================================

int binarySearch(
    int arr[],
    int left,
    int right,
    int target)
{
    if(left > right)
    {
        return -1;
    }

    int mid =
        left + (right - left) / 2;

    if(arr[mid] == target)
    {
        return mid;
    }

    if(target < arr[mid])
    {
        return binarySearch(
            arr,
            left,
            mid - 1,
            target
        );
    }

    return binarySearch(
        arr,
        mid + 1,
        right,
        target
    );
}

// ==================================================
// MAIN
// ==================================================

int main()
{
    cout << "Factorial(5) : "
         << factorial(5)
         << endl;

    cout << "Sum(5) : "
         << sumN(5)
         << endl;

    cout << "Fibonacci(6) : "
         << fibonacci(6)
         << endl;

    cout << "\nHead Recursion : ";
    headRecursion(5);

    cout << "\nTail Recursion : ";
    tailRecursion(5);

    cout << "\nTree Recursion : ";
    treeRecursion(3);

    cout << "\nIndirect Recursion : ";
    funA(10);

    int arr[] =
    {
        10,20,30,40,50,60,70
    };

    int index =
        binarySearch(
            arr,
            0,
            6,
            50
        );
        
    cout << "\n\nBinary Search Index : "<< index<< endl;
    return 0;
}