#include <iostream>
using namespace std;

class Mother {
private:
    int mother_data;
public:
    Mother(){cout<<"Mother constructor was called "<<endl;}
    virtual void MotherMethod() {cout<<"Mother::MotherMethod()"<<endl;}
};