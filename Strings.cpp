#include<iostream>
#include<string>
using namespace std;

int main()
{
    string String1;
    string String2;
    // take an input strings from user:
    cout << "Enter String 1: \n" ;
    cin >> String1;
    cout << "Enter String 2: \n"; 
    cin >> String2;

    // display two strings
    cout << " String 1 : "<< String1 << "\n String 2 : " << String2;

    //String Concatenation
    string full = String1 + String2;
    cout << "\n Concatenated String is: "<< full;

    // String Append
     cout << "\n Appended Strings : "<< String1.append(String2);

    //String size
    cout << "\n Size of String1 is : "<< String1.length();
    cout << "\n Size of String2 is : "<< String2.length();

    //Access Strings
    cout << "\n element is " << String1[3];
    cout << "\n element is " << String2[2];


    
}