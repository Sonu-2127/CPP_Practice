#include <iostream>
using namespace std;

class Point{
    int x_axis;
    int y_axis;
    public:
    Point(int a, int b){ // in-line parametrized constructor
        x_axis = a;
        y_axis = b;
    }
    Point(void){ // in-line default constuctor
        x_axis = 0;
        y_axis = 0;
    }
    Point(Point &P){ // copy constructor
        x_axis = P.x_axis;
        y_axis = P.y_axis;
    }
    void showdata(void){
        cout << "X-axis is: " << x_axis << " and Y-axis is " << y_axis << endl;
    }
};

int main(void){
    Point P1;
    P1.showdata();
    Point P2(10,20);
    P2.showdata();
    Point P3(P2); // copy the second constructor into third constructor
    P3.showdata();
    return 0;
}