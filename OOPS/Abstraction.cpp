/*
==========================================================
                ABSTRACTION DEMONSTRATION
==========================================================

Definition:
-----------
Abstraction means hiding implementation details
and showing only the necessary functionality.

Achieved Using:
---------------
1. Abstract Class
2. Pure Virtual Function

Syntax:
-------
virtual returnType functionName() = 0;

A class containing at least one pure virtual
function becomes an Abstract Class.

Abstract Class:
---------------
- Cannot create objects.
- Can contain normal functions.
- Can contain data members.

==========================================================
*/

#include <iostream>
using namespace std;

// ==================================================
// ABSTRACT CLASS
// ==================================================

class Shape
{
public:

    // Pure Virtual Function
    virtual void area() = 0;

    // Normal Function
    void display()
    {
        cout << "Shape Information" << endl;
    }
};

// ==================================================
// DERIVED CLASS : CIRCLE
// ==================================================

class Circle : public Shape
{
private:
    float radius;

public:

    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle : "
             << 3.14 * radius * radius
             << endl;
    }
};

// ==================================================
// DERIVED CLASS : RECTANGLE
// ==================================================

class Rectangle : public Shape
{
private:
    int length;
    int breadth;

public:

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area() override
    {
        cout << "Area of Rectangle : "
             << length * breadth
             << endl;
    }
};

int main()
{
    // ==============================================
    // NOT ALLOWED
    // ==============================================

    // Shape s;
    // ERROR
    // Cannot create object of abstract class.

    // ==============================================
    // RUNTIME ABSTRACTION
    // ==============================================

    Shape* ptr;

    Circle c(5);
    Rectangle r(10,5);

    ptr = &c;

    ptr->display();
    ptr->area();

    cout << endl;

    ptr = &r;

    ptr->display();
    ptr->area();

    return 0;
}