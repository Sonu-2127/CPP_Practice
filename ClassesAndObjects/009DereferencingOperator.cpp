#include <iostream>
using namespace std;

class M{
    int x;
    int y;
    public:
    void set_xy(int a, int b){
        x = a;
        y = b;
    }
    friend int sum(M);
};
int sum(M m){
    int M ::* px = &M :: x;
    int M ::* py = &M :: y;
    M *pm = &m;
    int sumresult = m.*px + pm->*py;
    return sumresult;
}

int main(void){
    M m1;
    void (M ::*pset_xy)(int, int) = &M :: set_xy;
    (m1.*pset_xy)(10,20);
    cout << "The sum is: " << sum(m1) << "\n";
    (m1.*pset_xy)(30,40);
    cout << "The sum is: " << sum(m1);
    return 0;
}