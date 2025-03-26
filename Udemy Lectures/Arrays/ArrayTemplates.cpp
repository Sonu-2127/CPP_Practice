#include "Arrays.h"

std::array <int, 5> myArray {1,2,3,4,5};
int yourArray[5] {};
int main(void)
{
    cout << myArray.at(1) << endl;
    myArray.at(1)= 100;
    cout << myArray.at(1) << endl;
    cout << "==========================================" << endl;

    // cout << yourArray.at(1) << endl; // cannot be used because it not a template based array
    // yourArray.at(1)= 100;
    // cout << yourArray.at(1) << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << yourArray[i] << endl;
    }

    cout << yourArray << endl;
    cout << yourArray + 2<< endl;
    cout << yourArray[0] << endl;
    cout << "Enter any key to exit the program" << endl;
    getchar();
    return 0;
}