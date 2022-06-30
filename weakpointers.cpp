/*  
   Provides a non-owning "weak" reference
   ->Always created from shared_ptr
   ->Does NOT increment or decrement reference use count
   ->Used to prevent strong reference cycles which could prevent objects from being deleted
*/
#include<iostream>
#include<vector>
#include<memory>
using namespace std;
class B;                                                     // forward declaration

class A {
    shared_ptr<B> b_ptr;
public:
    void set_B(shared_ptr<B> &b) {
        b_ptr = b;
    }    
    A() {cout << "A Constructor" << endl;}
    ~A() {cout << "A Destructor" << endl;}
};

class B {
    weak_ptr<A> a_ptr;                                     // made weak to break the strong circular reference
public:
    void set_A(shared_ptr<A> &a) {
        a_ptr = a;
    }    
    B() {cout << "B Constructor" << endl;}
    ~B() {cout << "B Destructor" << endl;}
};


int main() {
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    a->set_B(b);
    b->set_A(a);

    

}