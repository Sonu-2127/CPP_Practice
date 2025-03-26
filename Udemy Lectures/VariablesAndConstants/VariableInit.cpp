#include <iostream>


using namespace std;

/* This function calculates the area of the room. */
int calculateAreaOfTheRoom(int length, int breadth)
{
    return length*breadth;
}


int main(void)
{
    int length {0};
    int breadth {0};
    cout << "Enter length and breadth for the room" << endl;
    cin >> length >> breadth;
    cout << calculateAreaOfTheRoom(length, breadth) << " sqrft" << endl;
}
