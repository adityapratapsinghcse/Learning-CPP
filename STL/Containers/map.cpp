#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    cout << "========================================\n";
    cout << "            STL MAP DEMO\n";
    cout << "========================================\n\n";

    // ==================================================
    // MAP CREATION
    // ==================================================

    map<int, string> myMap;

    // ==================================================
    // INSERTION
    // ==================================================

    // Method 1 : insert()

    myMap.insert({1, "Apple"});
    myMap.insert({2, "Banana"});

    // Method 2 : operator[]

    myMap[3] = "Mango";
    myMap[4] = "Orange";

    // Method 3 : emplace()

    myMap.emplace(5, "Grapes");

    // ==================================================
    // SIZE
    // ==================================================

    cout << "Map Size : "
         << myMap.size()
         << endl;

    // ==================================================
    // EMPTY
    // ==================================================

    if(myMap.empty())
    {
        cout << "Map is Empty\n";
    }
    else
    {
        cout << "Map is NOT Empty\n";
    }

    // ==================================================
    // ACCESSING ELEMENTS
    // ==================================================

    cout << "\nUsing [] Operator\n";
    cout << "Key 1 : "
         << myMap[1]
         << endl;

    cout << "\nUsing at()\n";
    cout << "Key 2 : "
         << myMap.at(2)
         << endl;

    // ==================================================
    // FIND
    // ==================================================

    auto mapIt = myMap.find(3);

    if(mapIt != myMap.end())
    {
        cout << "\nKey Found\n";
        cout << mapIt->first
             << " -> "
             << mapIt->second
             << endl;
    }

    // ==================================================
    // COUNT
    // ==================================================

    cout << "\nCount of Key 4 : "
         << myMap.count(4)
         << endl;

    // ==================================================
    // RANGE BASED LOOP
    // ==================================================

    cout << "\nTraversal (Range Based Loop)\n";

    for(auto pair : myMap)
    {
        cout << pair.first
             << " -> "
             << pair.second
             << endl;
    }

    // ==================================================
    // ITERATOR TRAVERSAL
    // ==================================================

    cout << "\nTraversal (Iterator)\n";

    for(auto it = myMap.begin();
        it != myMap.end();
        it++)
    {
        cout << it->first
             << " -> "
             << it->second
             << endl;
    }

    // ==================================================
    // REVERSE ITERATOR
    // ==================================================

    cout << "\nReverse Traversal\n";

    for(auto it = myMap.rbegin();
        it != myMap.rend();
        it++)
    {
        cout << it->first
             << " -> "
             << it->second
             << endl;
    }

    // ==================================================
    // ERASE
    // ==================================================

    myMap.erase(2);

    cout << "\nAfter Erasing Key 2\n";

    for(auto pair : myMap)
    {
        cout << pair.first
             << " -> "
             << pair.second
             << endl;
    }

    // ==================================================
    // LOWER BOUND
    // ==================================================

    auto lb = myMap.lower_bound(3);

    if(lb != myMap.end())
    {
        cout << "\nLower Bound of 3 : "
             << lb->first
             << endl;
    }

    // ==================================================
    // UPPER BOUND
    // ==================================================

    auto ub = myMap.upper_bound(3);

    if(ub != myMap.end())
    {
        cout << "Upper Bound of 3 : "
             << ub->first
             << endl;
    }

    // ==================================================
    // SWAP
    // ==================================================

    map<int, string> anotherMap;

    anotherMap[100] = "Hundred";

    myMap.swap(anotherMap);

    cout << "\nAfter Swap\n";

    for(auto pair : myMap)
    {
        cout << pair.first
             << " -> "
             << pair.second
             << endl;
    }

    // ==================================================
    // CLEAR
    // ==================================================

    myMap.clear();

    cout << "\nMap Size After Clear : "
         << myMap.size()
         << endl;

    // ==================================================
    // UNORDERED MAP SECTION
    // ==================================================

    cout << "\n\n========================================\n";
    cout << "       STL UNORDERED_MAP DEMO\n";
    cout << "========================================\n\n";

    unordered_map<int, string> myUnorderedMap;

    // ==================================================
    // INSERTION
    // ==================================================

    myUnorderedMap.insert({1, "Apple"});
    myUnorderedMap.insert({2, "Banana"});

    myUnorderedMap[3] = "Mango";
    myUnorderedMap[4] = "Orange";

    myUnorderedMap.emplace(5, "Grapes");

    // ==================================================
    // SIZE
    // ==================================================

    cout << "Unordered Map Size : "
         << myUnorderedMap.size()
         << endl;

    // ==================================================
    // EMPTY
    // ==================================================

    if(myUnorderedMap.empty())
    {
        cout << "Unordered Map is Empty\n";
    }
    else
    {
        cout << "Unordered Map is NOT Empty\n";
    }

    // ==================================================
    // ACCESSING ELEMENTS
    // ==================================================

    cout << "\nUsing [] Operator\n";
    cout << myUnorderedMap[1] << endl;

    cout << "\nUsing at()\n";
    cout << myUnorderedMap.at(2) << endl;

    // ==================================================
    // FIND
    // ==================================================

    auto unorderedIt = myUnorderedMap.find(3);

    if(unorderedIt != myUnorderedMap.end())
    {
        cout << "\nKey Found\n";
        cout << unorderedIt->first
             << " -> "
             << unorderedIt->second
             << endl;
    }

    // ==================================================
    // COUNT
    // ==================================================

    cout << "\nCount of Key 4 : "
         << myUnorderedMap.count(4)
         << endl;

    // ==================================================
    // RANGE LOOP
    // ==================================================

    cout << "\nTraversal (Range Loop)\n";

    for(auto pair : myUnorderedMap)
    {
        cout << pair.first
             << " -> "
             << pair.second
             << endl;
    }

    // ==================================================
    // ITERATOR LOOP
    // ==================================================

    cout << "\nTraversal (Iterator)\n";

    for(auto it = myUnorderedMap.begin();
        it != myUnorderedMap.end();
        it++)
    {
        cout << it->first
             << " -> "
             << it->second
             << endl;
    }

    // ==================================================
    // ERASE
    // ==================================================

    myUnorderedMap.erase(2);

    cout << "\nAfter Erasing Key 2\n";

    for(auto pair : myUnorderedMap)
    {
        cout << pair.first
             << " -> "
             << pair.second
             << endl;
    }

    // ==================================================
    // HASH TABLE INFORMATION
    // ==================================================

    cout << "\nBucket Count : "
         << myUnorderedMap.bucket_count()
         << endl;

    cout << "Bucket of Key 3 : "
         << myUnorderedMap.bucket(3)
         << endl;

    cout << "Load Factor : "
         << myUnorderedMap.load_factor()
         << endl;

    // ==================================================
    // RESERVE
    // ==================================================

    myUnorderedMap.reserve(50);

    // ==================================================
    // REHASH
    // ==================================================

    myUnorderedMap.rehash(100);

    // ==================================================
    // SWAP
    // ==================================================

    unordered_map<int,string> anotherUnorderedMap;

    anotherUnorderedMap[100] = "Hundred";

    myUnorderedMap.swap(anotherUnorderedMap);

    cout << "\nAfter Swap\n";

    for(auto pair : myUnorderedMap)
    {
        cout << pair.first
             << " -> "
             << pair.second
             << endl;
    }

    // ==================================================
    // CLEAR
    // ==================================================

    myUnorderedMap.clear();

    cout << "\nUnordered Map Size After Clear : "
         << myUnorderedMap.size()
         << endl;

    return 0;
}
