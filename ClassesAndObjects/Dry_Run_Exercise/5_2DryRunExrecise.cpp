#include <iostream>
using namespace std;

class B;
class A{
    int x;
    public:
    void setdata(int d){
        x = d;
    }
    void showdata(void){
        cout << "Data in A is: " << x << endl;
    }
    friend void add(A &, B &); // remove & from B class in this line, there will be an error
};

class B{
    int x;
    public:
    void setdata(int d){
        x = d;
    }
    void showdata(void){
        cout << "Data in B is: " << x << endl;
    }
    friend void add(A &, B &);
};

void add(A &obj_a, B &obj_b){
    obj_a.x+=obj_b.x;
}

int main(void){
    A a;
    B b;
    a.setdata(10);
    b.setdata(10);
    add(a, b);
    a.showdata();
    b.showdata();
    return 0;
}