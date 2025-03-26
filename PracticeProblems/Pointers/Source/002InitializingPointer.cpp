/*************************************************
*Author: Nishant Patra
*************************************************/

#include <iostream>
#include <string.h>
#include <stdint.h>

using namespace std;

int main() {
    int num{10};
    cout << "The value of num is: " << num << endl; 
    cout << "The size of num is: " << sizeof(num) << endl; 
    cout << "The address of num is: " << &num << endl;

    int *p; // holds garbage address
    double value = 100;
    double *q = &value;
    cout << "The value of p is: " << p << endl; 
    cout << "The size of p is: " << sizeof(p) << endl; //p is of 8 bytes
    cout << "The address of p is: " << &p << endl;

    // size of a pointer and what its pointing to will be different
    cout << "The size of value is: " << sizeof(value) << endl;
    cout << "The size of q is: " << sizeof(q) << endl;

    p = nullptr; //assigns 0 as an address to the pointer
    cout << "The value of p is: " << p << endl;

    //Pointers are variable, so they can change
    //They can be null and uninitialized

    double high_temp{45.6};
    double low_temp{2.5};
    double *p_temp;

    p_temp = &high_temp;
    cout << "The value of high_temp is: " << *p_temp << endl;
    p_temp = &low_temp;
    cout << "The value of low_temp is: " << *p_temp << endl;
    p_temp = nullptr;
    cout << "The value of p_temp is: " << p_temp << endl;
    return 0;
}