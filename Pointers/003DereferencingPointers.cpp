/*************************************************
*Author: Nishant Patra
*************************************************/

#include <iostream>
#include <string.h>
#include <stdint.h>
#include <vector>
using namespace std;

int main() {
    /*Dereferencing a pointer. */
    int score{100};
    int *ptr_score{&score};

    cout << *ptr_score << endl;  //suing * operator to find the value is called dereferencing
    cout << score << endl;

    //changing the value of the variable suign pointer
    *ptr_score = 200;

    cout << *ptr_score << endl;
    cout << score << endl;

    //with string

    string name = "Nishant";
    string *ptr_name{&name};

    cout <<  *ptr_name << endl;
    cout <<  name << endl;

    *ptr_name = "Patra";
    cout <<  *ptr_name << endl;
    cout <<  name << endl;

    // with vectors

    vector<string> stooges {"Ajit", "Subasini", "Sonali", "Sonu"};
    vector<string> *ptr_vector{nullptr};
    ptr_vector = &stooges;

    cout << "First element: " << (*ptr_vector).at(0) << endl;
    cout << "second element: " << (*ptr_vector).at(1) << endl;
    cout << "third element: " << (*ptr_vector).at(2) << endl;
    cout << "fourth element: " << (*ptr_vector).at(3) << endl;

    cout << "stooges: " << endl;
    for(auto stooges: *ptr_vector)
    {
        cout << stooges << ","<<endl;
    }

    return 0;
}