#include<iostream>
#include<memory>
#include<vector>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
};
 
void fun()
{
    // By taking a pointer p and
    // dynamically creating object
    // of class rectangle
    Rectangle* p = new Rectangle();
}
class MyClass {
        public:
        
        int myMethod(int id);

    };

    int MyClass :: myMethod(int id){
        cout<< id;
    }
 
int main()
{


    int num  = 5; //allocate memory on stack
    int* hnum = new int(); //allocate memory on heap
    *hnum = 5;

    delete hnum;

    unique_ptr<int> p1 {new int {100}};
    cout << *p1 << endl; //100
    *p1 = 200;
    cout << *p1 <<endl; //200
    cout << p1.get() << endl;

    p1.reset();

    if(p1){                                  //does not execute
        cout << *p1 << endl;
    }
    
    std :: unique_ptr<MyClass> p2 {new MyClass()};
    p2-> myMethod(1500);
    
 }