#include <iostream>
#include <cstdint>
using namespace std;


class Car
{
    private:
    uint8_t mileage;
    string carName;
    double priceOfCar;
    public:
    void putDetails(uint8_t m, string cn, double poc)
    {
        mileage = m;
        carName = cn;
        priceOfCar = poc;
    }
    void getDetails()
    {
        cout << "The name of car is " << carName << endl;
        cout << "The price of car is " << priceOfCar << endl;
        /* Without static_cast it will print the caharacter value. */
        cout << "Mileage of the car is " << static_cast<int>(mileage) << endl;
    }


};

int main(void)
{
    cout << sizeof(Car) << endl;
    Car myCar;
    cout << sizeof(myCar) << endl;
    cout << "Address of the Class Object is " << &myCar << endl;
    myCar.putDetails(20,"Tata Nexon", 2500000.40);
    myCar.getDetails();
    return 0;
}