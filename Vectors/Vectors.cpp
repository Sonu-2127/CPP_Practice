#include "Vectors.h"

vector<string> myVector = {"Nishant", "Embedded Engineer", "Bosch"};
vector<string> carBrands = {"Tata Motors", "Mahindra", "Nissan", "Hyundai"};

void getFirstElementOfVector(const vector<string>& myVector)
{
    if (!myVector.empty())
    {
        cout << "First element of the vector is: " << myVector.front() << endl;
    }
    else
    {
        cout << "The vector is empty." << endl;
    }
}

void lastElementOfVector(const vector<string>& myVector)
{
    if (!myVector.empty())
    {
        cout << "Last element of the vector is: " << myVector.back() << endl;
    }
    else
    {
        cout << "The vector is empty." << endl;
    }
}

void swapFirstAndLastElementsOfVectors(vector<string>& myVector)
{
    if (myVector.size() > 1)
    {
        string temp = myVector.back();
        myVector.back() = myVector.front();
        myVector.front() = temp;
    }
    else
        cout << "The Vector is empty" << endl;
}

void getParticularIndexedValue(vector<string>& myVector, int index)
{  
    if(!myVector.empty()){ 
    // if(myVector.size() > index)
        cout << "The value at " << index <<  " is " << myVector.at(index) << endl;
    }
    else
        cout << "Out of Bound index" << endl;
}

int main()
{
    for (string cars : carBrands)
    {
        if(cars == "Tata Motors" || cars == "Mahindra")
            cout <<  cars << " is an Indian car brand." << endl;
        else
            cout << cars << " is a foreign car brand." << endl;
    }
    getFirstElementOfVector(carBrands);
    lastElementOfVector(carBrands);
    swapFirstAndLastElementsOfVectors(carBrands);
    getFirstElementOfVector(carBrands);
    lastElementOfVector(carBrands);
    getParticularIndexedValue(carBrands,3);
    return 0;
}