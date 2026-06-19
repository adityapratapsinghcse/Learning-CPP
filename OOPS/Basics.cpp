#include <iostream>
using namespace std;

// ==================================================
// CLASS
// Blueprint for creating objects
// ==================================================

class Student
{
public:

    // ==============================================
    // ATTRIBUTES (Data Members)
    // ==============================================

    string name;
    int age;
    int rollNo;

    // ==============================================
    // CONSTRUCTOR
    // Automatically called when object is created
    // ==============================================

    Student(string n, int a, int r)
    {
        name = n;
        age = a;
        rollNo = r;

        cout << "Constructor Called" << endl;
    }

    // ==============================================
    // BEHAVIOUR (Member Functions)
    // ==============================================

    void displayDetails()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Roll No : " << rollNo << endl;
    }

    void study()
    {
        cout << name
             << " is Studying"
             << endl;
    }

    // ==============================================
    // DESTRUCTOR
    // Automatically called when object is destroyed
    // ==============================================

    ~Student()
    {
        cout << "\nDestructor Called" << endl;
    }
};

int main()
{
    // ==============================================
    // OBJECT
    // Instance of a class
    // ==============================================

    Student s1("Aditya", 20, 101);

    // ==============================================
    // ACCESSING ATTRIBUTES
    // ==============================================

    cout << "\nAccessing Attributes" << endl;

    cout << "Name : "
         << s1.name
         << endl;

    cout << "Age : "
         << s1.age
         << endl;

    // ==============================================
    // ACCESSING BEHAVIOUR
    // ==============================================

    s1.displayDetails();

    s1.study();

    return 0;
}