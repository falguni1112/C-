#include<iostream>
#include<vector>
#include<memory>
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

int main() {
    // Test *t1= new Test{1000};
    // delete t1;
    unique_ptr<Test>t1(new Test{100});
    unique_ptr<Test> t2 = make_unique<Test>(1000);
    unique_ptr<Test> t3;
    //t3=t1; not allowed to assign unique pointers
    t3=move(t1);
    if(!t1)
        cout<<"t1 is nullptr"<<endl;


    //    unique_ptr<Parent Class Constructor elements");
    //    cout << *a1 << endl;


    vector<unique_ptr<Test>> t4;
    //u can create as many objects as u can
    t4.push_back(make_unique<Test>(2000));
    t4.push_back(make_unique<Test>(3000));
    t4.push_back(make_unique<Test>(4000));

    for(const auto &intest: t4)
        cout << *intest;
    return 0;

}