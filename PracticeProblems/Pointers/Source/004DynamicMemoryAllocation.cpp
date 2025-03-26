/*************************************************
*Author: Nishant Patra
*************************************************/

#include <iostream>
#include <string.h>
#include <stdint.h>

using namespace std;

int main() {
    // uisng new operator to allocate storage

    int *ptr_int{nullptr};

    ptr_int = new int; // allocate an integer in heap
    cout << ptr_int << endl; // garbage address
    cout << *ptr_int << endl; //garbage value storing

    *ptr_int = 100;
    cout << ptr_int << endl;
    cout << *ptr_int << endl;
    delete ptr_int; // release the memory

    //using new[] to allocate memory for an array
    int *ptr_array {nullptr};
    int size {};

    cout << "How big you want the array? " << endl;
    cin >> size;

    ptr_array = new int[size];
    for(int i = 0; i < size; i++)
    {
        *ptr_array = i+1;
        cout << *ptr_array << "\t";
        ptr_array++;
    }
    delete ptr_array;
    return 0;
}