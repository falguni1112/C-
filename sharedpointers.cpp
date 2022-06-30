/*  Shared Pointers provide shared ownership of objects on heap
    unlike unique pointers, there can be many shared pointers pointing to same objects on heap.
    -> Can be assigned
    -> Can be moved
    -> When the use count is zero the managed object on heap is destroyed
*/
#include<iostream>
#include<vector>
#include<memory>
using namespace std;

int main(){
    shared_ptr<int> p1 {new int{100}};
    cout << *p1 << endl;                                //  --->100
    /*  *p1 = 200;
        cout << *p1 << endl;                            ---> 200
        automatically deleted 
    */ 
    cout << p1.use_count () << endl;                    // 1

    shared_ptr<int> p2 { p1 };                          //shared ownership
    cout << p1.use_count () << endl;                    // 2

    p1.reset();                                         // decrement the use_count ; p1 is nulled out
    cout << p1.use_count () << endl;                    // 0
    cout << p2.use_count () << endl;                    // 1

    // VECTORS AND MOVE

    vector<shared_ptr<int>> vec;
    shared_ptr<int> ptr {new int{200}};
    vec.push_back(ptr);                                 // OK- copy IS allowed
    cout << ptr.use_count () << endl;                   //2

    //automatically deleted

    // SHARED_PTR -MAKE_SHARED

    shared_ptr<int> ptr1 = make_shared<int>(500);      //use_count - 1
    shared_ptr<int> ptr2 { ptr1 };                     //use_count - 2
    shared_ptr<int> ptr3;                              
    ptr3 = ptr1;                                       //use_count - 3
    
    /*  automatically deleted
        allthree pointers point to same object on heap!
        wheam use_count becomes 0,the heap object is deallocated
    */

}