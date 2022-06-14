#include<iostream>

using namespace std;

int main()
{
    string food = "Pizza"; // food variable
    string &lunch = food;  // reference to food
    string &dinner = lunch;// reference to lunch

    cout << dinner << " "<< lunch<<" "<<food;
    cout << "\n" << &food;
    return 0;
    
}