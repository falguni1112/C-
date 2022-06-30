// SIMPLE TRY-CATCH BLOCK

#include<iostream>
#include<memory>
using namespace std;

int main(){
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    try{
        if(gallons == 0)
            throw 0;
        miles_per_gallon = miles / gallons;
        cout << "Result: "<< miles_per_gallon << endl;

    } catch(int &exc){
        cerr << "Can't divide by zero" <<
    }
    
    cout << "Bye" << endl;

    return 0;
}
