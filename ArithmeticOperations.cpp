#include<iostream>
using namespace std;

int main() {

int a=5;
int b=15;
int sum,diff,mul,div,mod;

sum = a + b;
diff = a - b;
mul = a * b;
div = b / a;
mod = b % a;

cout << "Sum = "<< sum;
cout << "difference = "<< diff;
cout << "multiplication = "<< mul;
cout << "division = "<< div;
cout << "mod = "<< mod;

return 0;
}
