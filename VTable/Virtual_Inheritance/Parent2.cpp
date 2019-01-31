#include "Grandparent.cpp"
class Parent2 : virtual public Grandparent {
public:
    Parent2(){cout<<"Parent2 constructor was called "<<endl;}
    virtual void parent2_foo() {cout<<"Parent2::parent2_foo()"<<endl;}
    int parent2_data;
};

