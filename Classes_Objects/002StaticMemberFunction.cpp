#include <iostream>

using namespace std;

class test{
    int code;
    static int count; // static member variable
    public:
    void setcode(void){
        code = ++count;
    }
    void showcode(void){
        cout << "Object Number is: " << code << endl;
    }
    static void showcount(void){   // static member function
        cout << "count is: " << count << endl;
    }
};

int test :: count; // to use static member variable

int main(void){
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test :: showcount();

    test t3;
    t3.setcode();

    test :: showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();
    t1.setcode();
    return 0;
}