#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter Choice (1-5): ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
    }

    return 0;
}