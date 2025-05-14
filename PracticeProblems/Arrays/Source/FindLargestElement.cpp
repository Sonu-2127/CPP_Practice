#include "FindLargestElement.h"
#include <assert.h>


void FindLargestElement(void)
{
    int myArray[] = {0, -1, -2, 5, 3};             // Includes zero
    const int length = sizeof(myArray)/sizeof(myArray[0]);
    if(length < 2)
        throw std::invalid_argument("Nothing to compare"); 
    int largeNumber {myArray[0]};
    for(int i = 1; i < length; i++)
    {
        if(myArray[i] > largeNumber)
        {
            largeNumber = myArray[i];
        }
    }
    cout << largeNumber;
    cout <<"\n Press any key to exit";
    getchar();
}