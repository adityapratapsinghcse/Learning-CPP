#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks = {10,20,30,40,50};

    vector<int>::iterator i;

    cout << "Traversal Using Iterator:\n";

    for(i = marks.begin();
        i != marks.end();
        i++)
    {
        cout << *i << " ";
    }

    cout << endl;

    i = marks.begin();

    cout << "\nCurrent Element : "
         << *i
         << endl;

    cout << "After ++i : "
         << *(++i)
         << endl;

    cout << "After --i : "
         << *(--i)
         << endl;

    cout << "After i + 2 : "
         << *(i + 2)
         << endl;

    return 0;
}