#include <iostream>
using namespace std;

// class Sample1{
//     int a;
//     int b;
//     public:
//     void setvalue(){
//         a = 25;
//         b = 40;
//     }
//     friend float mean(Sample1);
// };

// float mean(Sample1 S){
//     return (float)(S.a + S.b)/2 ;
// }
// int main(void){
//     Sample1 S1;
//     S1.setvalue();
//     cout << "Mean is: " << mean(S1) << endl;
// }

class ABC;

class XYZ{
    int data;
    public:
    void setvalue(int value){
        data = value;
    }
    friend void sum(XYZ, ABC);
};

class ABC{
    int data;
    public:
    void setvalue(int value){
        data = value;
    }
    friend void sum(XYZ, ABC);
};

void sum(XYZ obj1, ABC obj2){
    cout << "sum of data value of XYZ and ABC objects using friend function = " << obj1.data + obj2.data << endl;
}

int main(void){
    ABC a;
    XYZ x;
    a.setvalue(10);
    x.setvalue(20);
    sum(x,a);
    return 0;
}
