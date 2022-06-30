/*
   When we delete a smart pointer we need more than to just destroy object on heap
   There are special use cases
   C++ smart pointers allow you to provide custom deleters

   Ways to achieve this -> Functions
                        -> Lambdas
                        -> Others..
*/

#include<iostream>
#include<memory>
#include<vector>
using namespace std;

class Test {
    private:
     int data;
    public:
     Test(): data{0} {cout << "Test Constructor("<< data << ")" << endl;} ;
     Test(int data): data{data} {cout << "Test Constructor("<< data << ")" << endl;} ;
     int get_data()const{return data;}
     ~Test(){cout << "Test Destructor("<< data << ")" << endl;} ;
};

//CUSTOM DELETERS- FUNCTION
void my_deleter(Test *ptr) {
    cout << "\tUsing my custom function deleter" << endl;
    delete ptr;
}
int main() {
    // using function
    {
        shared_ptr<Test> ptr1{new Test{100},my_deleter};
    }
    cout << "====================================" << endl;
// CUSTOM DELETERS- LAMBDA

    { 
        shared_ptr<Test> ptr2(new Test{100},
        [](Test *ptr) {
            cout << "\tUsing my custom lambda deleter" << endl;
            delete ptr;
        });
    }
    
}


