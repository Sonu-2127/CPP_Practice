#include <iostream>
using namespace std;

class Sample{
    private:
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
    Sample S1(10,20); // implicit constructor calling
    S1.showdata();
    Sample S2 = Sample(30,40); // explicit constructor calling
    S2.showdata();
}