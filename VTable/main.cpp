#include <iostream>

using namespace std;

#include "Virtual_Inheritance/VTChild.cpp"
#include "VBasicUnderstand/NonVirtualClass.cpp"
#include "VBasicUnderstand/VirtualClass.cpp"
#include "Multiple_Inheritance/Child.cpp"
#include "VBasicUnderstand/Parent.cpp"
#include "VBasicUnderstand/Derived.cpp"

template<class T>
int SeeBits(T func) {
    union {
        T ptr;
        int i;
    };
    ptr = func;

    return i;
}

//three different examples will be demonstrated
int main() {
    //Analitikoteres odigies yparxoyn sto documentation
    cout << "Size of NonVirtualClass: " << sizeof(NonVirtualClass) << endl;
    cout << "Size of VirtualClass: " << sizeof(VirtualClass) << endl;
    cout << "Size of Father: " << sizeof(Father) << endl;


    //this  used and tested for Debugging of all Objects
    Parent p1, p2;
    Derived d1, d2;
    Child child;
    VTChild Vt1;

//#########################Some examples of Multiple_Inheritenc###################################################################################################

    //Example of a way  to print out the offsets of all the members:
    cout << "Child Offset a = " << (size_t) &child.child_data - (size_t) &child << endl;


    child.ChildMethod();
    child.FatherMethod();
    child.FatherFoo();

    cout<<endl<<endl;

    Father *father = &child;

    //get the virtual table pointer of object father
    int *vptr = *(int **) father;


    // we shall call the first virtual function,
    //function Father::FatherMethod() is the first entry of the virtual table, so it's vptr[0]
    cout << "Same Method called with Vptr " ;
    ((void (*)()) vptr[1])();

    //the function that called above is similar to this classic way
    cout << "Same Method called with classic way " ;
    father->FatherFoo();//dynamic type is Child due to cast, so the overridden class of Child::FatherFoo() will be called
    cout<<endl<<endl;

//#########################Some example of Virtual_Inheritance###################################################################################################


   //when an object of VTCHild created we expect for the constructor of grandparent to be called as first
    Vt1.grandparent_foo();
    Vt1.parent1_foo();
    Vt1.parent2_foo();
    Vt1.child_foo();

    cout<<endl<<endl;

    Grandparent *grandparent=&Vt1;
    grandparent->grandparent_foo();

    cout<<endl<<endl;

    //cast tp Parent 1
    Parent1* parent1 = &Vt1;
    parent1->grandparent_foo();
    parent1->parent1_foo();

    cout<<endl<<endl;
    //cast tp Parent 2
    Parent1* parent2 = &Vt1;
    parent2->grandparent_foo();
    parent2->parent1_foo();


    return 0;
}