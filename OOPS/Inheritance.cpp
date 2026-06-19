/*
==========================================================
              ALL TYPES OF INHERITANCE
==========================================================

Types Covered:

1. Single Inheritance
2. Multilevel Inheritance
3. Multiple Inheritance
4. Hierarchical Inheritance
5. Hybrid Inheritance

==========================================================
*/

#include <iostream>
using namespace std;

// ==================================================
// BASE CLASS
// ==================================================

class Animal
{
public:

    void eat()
    {
        cout << "Animal is Eating" << endl;
    }
};

// ==================================================
// 1. SINGLE INHERITANCE
// Animal -> Dog
// ==================================================

class Dog : public Animal
{
public:

    void bark()
    {
        cout << "Dog is Barking" << endl;
    }
};

// ==================================================
// 2. MULTILEVEL INHERITANCE
// Animal -> Dog -> Puppy
// ==================================================

class Puppy : public Dog
{
public:

    void weep()
    {
        cout << "Puppy is Weeping" << endl;
    }
};

// ==================================================
// 3. MULTIPLE INHERITANCE
// ==================================================

class Engine
{
public:

    void startEngine()
    {
        cout << "Engine Started" << endl;
    }
};

class MusicSystem
{
public:

    void playMusic()
    {
        cout << "Music Playing" << endl;
    }
};

class Car : public Engine, public MusicSystem
{
public:

    void drive()
    {
        cout << "Car is Driving" << endl;
    }
};

// ==================================================
// 4. HIERARCHICAL INHERITANCE
// Animal -> Cat
// Animal -> Cow
// ==================================================

class Cat : public Animal
{
public:

    void meow()
    {
        cout << "Cat is Meowing" << endl;
    }
};

class Cow : public Animal
{
public:

    void moo()
    {
        cout << "Cow is Mooing" << endl;
    }
};

// ==================================================
// 5. HYBRID INHERITANCE
// Combination of Multiple + Multilevel
// ==================================================

class Person
{
public:

    void showPerson()
    {
        cout << "I am a Person" << endl;
    }
};

class Student : public Person
{
public:

    void study()
    {
        cout << "Student is Studying" << endl;
    }
};

class Athlete
{
public:

    void play()
    {
        cout << "Athlete is Playing" << endl;
    }
};

class SportsStudent : public Student, public Athlete
{
public:

    void participate()
    {
        cout << "Participating in Sports Event" << endl;
    }
};

int main()
{
    // ==================================================
    // SINGLE INHERITANCE
    // ==================================================

    cout << "\n===== SINGLE INHERITANCE =====\n";

    Dog d;

    d.eat();
    d.bark();

    // ==================================================
    // MULTILEVEL INHERITANCE
    // ==================================================

    cout << "\n===== MULTILEVEL INHERITANCE =====\n";

    Puppy p;

    p.eat();
    p.bark();
    p.weep();

    // ==================================================
    // MULTIPLE INHERITANCE
    // ==================================================

    cout << "\n===== MULTIPLE INHERITANCE =====\n";

    Car c;

    c.startEngine();
    c.playMusic();
    c.drive();

    // ==================================================
    // HIERARCHICAL INHERITANCE
    // ==================================================

    cout << "\n===== HIERARCHICAL INHERITANCE =====\n";

    Cat cat;

    cat.eat();
    cat.meow();

    cout << endl;

    Cow cow;

    cow.eat();
    cow.moo();

    // ==================================================
    // HYBRID INHERITANCE
    // ==================================================

    cout << "\n===== HYBRID INHERITANCE =====\n";

    SportsStudent ss;

    ss.showPerson();
    ss.study();
    ss.play();
    ss.participate();

    return 0;
}