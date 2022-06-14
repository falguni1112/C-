#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    int n = 5;
    // for(int i =0;i<10;i++){
    //     cout << i << "\n";
    // }

    for(i = 1; i <= n; i++)
{
for(j = 1; j <= i; j++)
{
cout << "* ";
}
//Ending line after each row
cout << "\n";
}
}