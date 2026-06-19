/*
==========================================================
                POLYMORPHISM DEMONSTRATION
==========================================================

Definition:
-----------
Polymorphism means "Many Forms".

Same function/operator can behave differently
depending on the situation.

Types:
------
1. Compile-Time Polymorphism
   - Function Overloading
   - Operator Overloading

2. Run-Time Polymorphism
   - Function Overriding
   - Virtual Functions

==========================================================
*/

#include <iostream>
using namespace std;

// ==================================================
// 1. FUNCTION OVERLOADING
// ==================================================

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

// ==================================================
// 2. OPERATOR OVERLOADING
// ==================================================

class Complex
{
public:

    int real;
    int imag;

    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator +(Complex const &obj)
    {
        Complex result;

        result.real = real + obj.real;
        result.imag = imag + obj.imag;

        return result;
    }

    void display()
    {
        cout << real
             << " + "
             << imag
             << "i"
             << endl;
    }
};

// ==================================================
// 3. FUNCTION OVERRIDING
// ==================================================

class Animal
{
public:

    virtual void sound()
    {
        cout << "Animal Makes Sound"
             << endl;
    }
};

class Dog : public Animal
{
public:

    void sound() override
    {
        cout << "Dog Barks"
             << endl;
    }
};

class Cat : public Animal
{
public:

    void sound() override
    {
        cout << "Cat Meows"
             << endl;
    }
};

int main()
{
    // ==================================================
    // FUNCTION OVERLOADING
    // ==================================================

    cout << "===== FUNCTION OVERLOADING =====\n";

    Calculator calc;

    cout << calc.add(10,20)
         << endl;

    cout << calc.add(10,20,30)
         << endl;

    cout << calc.add(10.5,20.5)
         << endl;

    // ==================================================
    // OPERATOR OVERLOADING
    // ==================================================

    cout << "\n===== OPERATOR OVERLOADING =====\n";

    Complex c1(2,3);
    Complex c2(4,5);

    Complex c3 = c1 + c2;

    c3.display();

    // ==================================================
    // FUNCTION OVERRIDING
    // ==================================================

    cout << "\n===== FUNCTION OVERRIDING =====\n";

    Animal* ptr;

    Dog d;
    Cat c;

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    return 0;
}