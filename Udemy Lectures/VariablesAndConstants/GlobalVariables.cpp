#include <iostream>

using namespace std;

int globalvariable {10};

int main(void)
{
    int localVariable {20};
    cout << globalvariable << endl;
    cout << localVariable << endl;

    long long int people_on_earth {7'600'000'000};
    cout << "the population on earth is - " << people_on_earth << endl;
    cout << __cplusplus << endl; // prints the version of c++ you are using

    float car_payment {401.3};
    cout << "My car payment " << car_payment << endl;
    return 0;
}