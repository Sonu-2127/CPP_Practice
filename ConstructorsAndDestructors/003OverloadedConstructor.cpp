#include <iostream>
using namespace std;

class Complex{
    float x;
    float y;
    public:
    Complex(){}  // no-arg constructor
    Complex(float a){ // one-arg constructor
        x = y = a;
    }
    Complex(float real, float imag){ // three-arg constructor
        x = real;
        y = imag;
    }
    friend Complex sum(Complex, Complex);
    friend void showdata(Complex);
};
Complex sum(Complex C1, Complex C2){
    Complex C3;
    C3.x = C1.x + C2.x;
    C3.y = C1.y + C2.y;
    return C3;
}
void showdata(Complex C4){
    cout << C4.x << " + j" << C4.y << endl; 
}

int main(void){
    Complex C;
    Complex A(10.5);
    Complex B(20.5,20.3);
    C = sum(A,B);

    cout << "A = "; showdata(A);
    cout << "B = "; showdata(B);
    cout << "C = "; showdata(C);
    return 0;
}