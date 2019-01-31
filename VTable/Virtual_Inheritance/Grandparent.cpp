#include <iostream>
using namespace std;
#pragma once

class Grandparent {
public:
    //this constructor will called first and the Parent 1 or 2
    Grandparent(){cout<<"Grandparent constructor was called "<<endl;}
    virtual void grandparent_foo() {cout<<"Grandparent::Grandparent_foo()"<<endl;}
    int grandparent_data;
};
