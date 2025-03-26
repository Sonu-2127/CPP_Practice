// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
    virtual void print() { cout << "print base class\n"; }

    void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
    void print() override { cout << "print derived class\n"; }

    void show() { cout << "show derived class\n"; }
};

class second_derived : public derived{
    public:
    void print() override { cout << "print second derived class\n"; }

    void show() { cout << "show second derived class\n"; }
};

class third_derived : public second_derived{
    public:
    void print() final { cout << "print third derived class\n"; }

    void show() { cout << "show third derived class\n"; }
};

int main()
{
    // base* bptr;
    // derived d;
    // bptr = &d;

    // // Virtual function, binded at runtime
    // bptr->print();

    // // Non-virtual function, binded at compile time
    // bptr->show();

    // bptr->base::print();

    derived* derPtr;
    second_derived secd;
    derPtr = &secd;

    derPtr->print();
    derPtr->show();

    return 0;
}