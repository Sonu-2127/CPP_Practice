#include <iostream>
using namespace std;

class Sample{
    int m,n;
    public:
    Sample(int,int);
    void showdata(void){
        cout << "X is: " << m << " and Y is: " << n << endl;
    }
};

Sample :: Sample(int x, int y){
    m = x;
    n = y;
}

int main(void){
    Sample S(10,20);
    S.showdata();
}