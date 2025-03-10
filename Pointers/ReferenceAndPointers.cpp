#include <iostream>

using namespace std;


int main()
{
    int y = 10;
    void *ptr;
    int *ptr2 = &y;
    ptr = &y;
    cout << y << endl;
    cout << &y << endl;
    cout << ptr << endl;
    cout << (int*)ptr << endl;
    cout << *(int*)ptr << endl; // used when void* is used
    cout << ptr2 << endl;
    cout << *ptr2 << endl;

    double value = 20.0; // benefit of using void*, it can change its holding type
    ptr = &value;
    cout << (double*)ptr << endl;
    cout << *(double*)ptr << endl; // used when void* is used

}