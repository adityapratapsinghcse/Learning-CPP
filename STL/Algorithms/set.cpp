#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> first  = {1,2,3,4,5};
    vector<int> second = {3,4,5,6,7};

    // ==================================================
    // SET UNION
    // ==================================================

    vector<int> result;

    set_union(first.begin(),first.end(),second.begin(),second.end(),back_inserter(result));
    cout << "Set Union : ";
    for(int value : result){
        cout << value << " ";
    }
    cout << endl;

    // ==================================================
    // SET INTERSECTION
    // ==================================================

    result.clear();

    set_intersection(first.begin(),first.end(),second.begin(),second.end(),back_inserter(result));
    cout << "Set Intersection : ";
    for(int value : result){
        cout << value << " ";
    }
    cout << endl;

    // ==================================================
    // SET DIFFERENCE
    // ==================================================

    result.clear();

    set_difference(first.begin(),first.end(),second.begin(),second.end(),back_inserter(result));
    cout << "Set Difference (First - Second) : ";
    for(int value : result){
        cout << value << " ";
    }
    cout << endl;

    // ==================================================
    // SET SYMMETRIC DIFFERENCE
    // ==================================================

    result.clear();
    set_symmetric_difference(first.begin(),first.end(),second.begin(),second.end(),back_inserter(result));
    cout << "Set Symmetric Difference : ";
    for(int value : result){
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
