#include "Mother.cpp"
#include "Father.cpp"
class Child : public Mother, public Father {
public:
    Child(){cout<<"Child constructor was called "<<endl<<endl;}
    virtual void ChildMethod() {cout<<"Child::ChildMethod()"<<endl;}
    void FatherFoo() override {cout<<"Child::FatherFoo()"<<endl;}
    int child_data;
};

