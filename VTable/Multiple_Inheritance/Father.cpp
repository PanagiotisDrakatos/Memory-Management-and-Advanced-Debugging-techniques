#include <iostream>
using namespace std;

class Father {
private:
    int father_data;
public:
    Father(){cout<<"Father constructor was called "<<endl;}
    virtual void FatherMethod() {cout<<"Father::FatherMethod()"<<endl;}
    virtual void FatherFoo() {cout<<"Father::FatherFoo()"<<endl;}
};
