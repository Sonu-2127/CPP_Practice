#include <iostream>
using namespace std;

class A{
    private:
    int z;
    public:
    int m;
    void getdata(int);
};

void A :: getdata(int x){
    m = x;
}

int main (void){
    A a1;
    int A::* ip = &A :: m; // pointer to member variable
    a1.getdata(10);
    A *ap = &a1; // pointer to object
    cout << a1.*ip << "\n";
    cout << ap->*ip << "\n";
    cout << ap->m << "\n";
    return 0;
}