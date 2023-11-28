#include <iostream>
using namespace std;

class Code{
    int id;
    public:
    Code(){} // constructor
    Code(int a){ // parameterized constructor
        id = a;
    }
    Code(Code &x){ // copy constructor
        id = x.id;
    }
    void showdata(void){
        cout << "the value of ID is: " << id << endl;
    }
};
int main(void){
    Code A(100); //object A is created and initialized
    Code B(A); // object B is called and A is copied into it----> copy constructor
    Code C = A; //Copy constructor called again
    Code D; // object created and not initialized
    D = C; // copy constructor not called

    cout <<"\n id of A is: "; A.showdata();
    cout <<"\n id of B is: "; B.showdata();
    cout <<"\n id of C is: "; C.showdata();
    cout <<"\n id of D is: "; D.showdata();
    return 0;
}