#include<iostream>
using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

void myFunction2(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int myFunction3(int x, int y) {
  return x + y;
}

void myFunction4(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  } 
}  

int main(){
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");

    myFunction2("Liam", 3);
    myFunction2("Jenny", 14);
    myFunction2("Anja", 30);

    cout << myFunction3(5, 3);

    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction4(myNumbers);
   
}