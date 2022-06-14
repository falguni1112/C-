#include<iostream>
using namespace std;

int main()
{
    int x , y;
    cout << "Enter the value for x: ";
    cin >> x;
    cout << "\n" << "Enter the value for y: ";
    cin >> y;

    if(x<y){
        cout << "YES";
    } else if(x > y){
        cout << "NO";
    } else{
        cout << "Both are equal";
    }

    return 0;


}