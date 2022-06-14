#include<iostream>

using namespace std;

int main()
{
    //array declaration
    int arr1[5] = {1,2,3,4,5};
    string arr2[4] = {"abc", "BNQ", "def", "MNP"};

    //Accessing array elements
    cout << arr1[2] << arr2[1];

    //taking input elements from user and storing them in an array
    int arr3[5];
    cout<< "Enter numbers for array: ";
    for(int i=0 ; i<5 ; i++){
        cin >> arr3[i];
    }
    // printing elements of the array
    for (int n = 0; n < 5; ++n) {
    cout<< arr3[n] << "  ";
  }
    


}