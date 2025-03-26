#include <iostream>
using namespace std;

class ITEM{
    private:
    float price;
    int quantity;
    public:
    void getData(float, int);
    void showData(void);
};

void ITEM :: getData(float a, int b){
    price = a;
    quantity = b;
}

void ITEM :: showData(void){
    cout << "The Price is " << price << endl;
    cout << "The Quantity is " << quantity << endl;
}

int main(void){
    ITEM M;
    M.getData(25.5,10);
    M.showData();
    return 0;
}