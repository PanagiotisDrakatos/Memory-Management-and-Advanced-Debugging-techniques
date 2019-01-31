#include "Parent2.cpp"
#include "Parent1.cpp"
class VTChild : public Parent1, public Parent2 {
public:
    VTChild(){cout<<"VTChild constructor was called "<<endl<<endl;}
    virtual void child_foo() {cout<<"VTChild::child_foo()"<<endl;}
    int child_data;
};
