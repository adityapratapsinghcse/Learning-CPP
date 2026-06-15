#include <iostream>
using namespace std;

int main(){

    // Variable Initialization
    // Syntax : data_type var_name;
    int a;

    // Variable Declaration
    // Var_name = value;
    a  = 5;

    // Variable Initilization and Declaration
    int age =20;

    // Different types of Data Types and their Size
    int count = 10;
    cout << "int" << "     --> " << sizeof(count) << endl;

    float pie = 3.142;
    cout <<"float" << "   --> " << sizeof(pie) << endl;

    char  alphabet = 'a';
    cout <<"char" << "    --> " << sizeof(alphabet) << endl;

    double weight = 3.142;
    cout << "double" << "  --> " << sizeof(weight) << endl;

    bool isMale = 3.142;
    cout << "bool" << "    --> " << sizeof(isMale) << endl;

    return 0;
}