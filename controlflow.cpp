#include <iostream>
using namespace std;

int main(){

    int budget;
    cout << "Enter Your budget: "<< endl;

    cin >> budget;
    

    // ****IF-ELSE Contrl Statement****
    
    if(budget > 200000){
        cout << "We can Buy Scorpio";
    }else{
        cout << "We cannot Buy Scorpio";
    }

    int marks =54;

    // ****IF-ELSE-IF Statement****
    
    
    if(marks > 90){
        cout << "A";
    }
    else if(marks > 80){
        cout << "B";
    }
    else if(marks > 70){
        cout << "C";
    }
    else if(marks > 60){
        cout << "D";
    }

    //****IF-ELSE-IF-ELSE Statement****


    if(marks > 90){
        cout << "A";
    }
    else if(marks > 80){
        cout << "B";
    }
    else if(marks > 70){
        cout << "C";
    }
    else if(marks > 60){
        cout << "D";
    }
    else{
        cout << "You Failed";
    }


    //**** NESTED-IF Statement****
    
    
    int height,weight;

    cout << "Enter the Height: ";
    cin >> height;

    cout << "Enter the Weight: ";
    cin >> weight;

    if(height >=5 ){
        if(weight > 70){
            cout << "You have a Good BMI"<<endl;
        }else{
            cout << "You don't have a Good BMI"<<endl;
        }
    }
    
    return 0;
}