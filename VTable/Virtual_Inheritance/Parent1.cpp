#include "Grandparent.cpp"
class Parent1 : virtual public Grandparent {
public:
    Parent1(){cout<<"Parent1 constructor was called "<<endl;}
    virtual void parent1_foo() {cout<<"Parent1::parent1_foo()"<<endl;}
    int parent1_data;
};

