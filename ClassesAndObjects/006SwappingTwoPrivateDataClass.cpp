#include <iostream>
using namespace std;

class Class_2;

class Class_1{
    int value1;
    public:
    void setdata(int a){
        value1 = a;
    }
    void showdata(void){
        cout << "class 1 value is: " << value1 << endl;
    }
    friend void valueExchange(Class_1 &, Class_2 &);
};

class Class_2{
    int value2;
    public:
    void setdata(int a){
        value2 = a;
    }
    void showdata(void){
        cout << "class 2 value is: " << value2 << endl;
    }
    friend void valueExchange(Class_1 &, Class_2 &);

};

void valueExchange(Class_1 &c1, Class_2 &c2){
    int temp;
    temp = c1.value1;
    c1.value1 = c2.value2;
    c2.value2 = temp;
}

int main(void){
    Class_1 C1;
    Class_2 C2;
    C1.setdata(20);
    C2.setdata(10);
    cout <<"Data before exchange" << endl;
    C1.showdata();
    C2.showdata();
    valueExchange(C1,C2);
    cout <<"Data after exchange" << endl;
    C1.showdata();
    C2.showdata();

}