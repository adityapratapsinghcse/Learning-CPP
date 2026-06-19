/*
==========================================================
        POINTERS AND REFERENCES DEMONSTRATION
==========================================================

Topics Covered:

1. Pointer Declaration
2. Address Operator (&)
3. Dereference Operator (*)
4. Null Pointer
5. Pointer Arithmetic
6. Pointer to Pointer
7. Arrays and Pointers
8. Passing Pointer to Function
9. Dynamic Memory Allocation
10. Dynamic Memory Deallocation
11. Reference Variable
12. Call By Reference
13. Return By Reference

==========================================================
*/

#include <iostream>
using namespace std;

// ==================================================
// FUNCTION USING POINTER
// ==================================================

void modifyUsingPointer(int* ptr)
{
    *ptr = 100;
}

// ==================================================
// FUNCTION USING REFERENCE
// ==================================================

void modifyUsingReference(int& ref)
{
    ref = 200;
}

// ==================================================
// RETURN BY REFERENCE
// ==================================================

int& getElement(int arr[], int index)
{
    return arr[index];
}

int main()
{
    // ==================================================
    // VARIABLE
    // ==================================================

    int num = 10;

    cout << "Value of num : "
         << num
         << endl;

    // ==================================================
    // ADDRESS OPERATOR (&)
    // ==================================================

    cout << "Address of num : "
         << &num
         << endl;

    // ==================================================
    // POINTER DECLARATION
    // ==================================================

    int* ptr = &num;

    cout << "\nPointer Stores Address : "
         << ptr
         << endl;

    // ==================================================
    // DEREFERENCE OPERATOR (*)
    // ==================================================

    cout << "Value Using Pointer : "
         << *ptr
         << endl;

    // ==================================================
    // MODIFY USING POINTER
    // ==================================================

    *ptr = 50;

    cout << "After Modification : "
         << num
         << endl;

    // ==================================================
    // NULL POINTER
    // ==================================================

    int* nullPtr = nullptr;

    cout << "\nNull Pointer : "
         << nullPtr
         << endl;

    // ==================================================
    // POINTER TO POINTER
    // ==================================================

    int** ptr2 = &ptr;

    cout << "\nPointer to Pointer : "
         << **ptr2
         << endl;

    // ==================================================
    // POINTER ARITHMETIC
    // ==================================================

    int arr[] = {10,20,30,40,50};

    int* p = arr;

    cout << "\nPointer Arithmetic\n";

    cout << *p << endl;

    p++;

    cout << *p << endl;

    p++;

    cout << *p << endl;

    // ==================================================
    // ARRAY AND POINTER RELATIONSHIP
    // ==================================================

    cout << "\nArray Elements\n";

    for(int i=0;i<5;i++)
    {
        cout << *(arr+i) << " ";
    }

    cout << endl;

    // ==================================================
    // PASS POINTER TO FUNCTION
    // ==================================================

    modifyUsingPointer(&num);

    cout << "\nAfter Pointer Function : "
         << num
         << endl;

    // ==================================================
    // DYNAMIC MEMORY ALLOCATION
    // ==================================================

    int* dynamicVar = new int;

    *dynamicVar = 500;

    cout << "\nDynamic Value : "
         << *dynamicVar
         << endl;

    // ==================================================
    // DEALLOCATION
    // ==================================================

    delete dynamicVar;

    dynamicVar = nullptr;

    // ==================================================
    // REFERENCE VARIABLE
    // ==================================================

    int x = 100;

    int& ref = x;

    cout << "\nReference Value : "
         << ref
         << endl;

    ref = 150;

    cout << "Original Variable : "
         << x
         << endl;

    // ==================================================
    // CALL BY REFERENCE
    // ==================================================

    modifyUsingReference(x);

    cout << "\nAfter Reference Function : "
         << x
         << endl;

    // ==================================================
    // RETURN BY REFERENCE
    // ==================================================

    getElement(arr,2) = 999;

    cout << "\nModified Array\n";

    for(int value : arr)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}