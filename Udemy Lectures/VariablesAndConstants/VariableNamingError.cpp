#include <iostream>

using namespace std;

int value = 0;
void correctNaming()
{
    value = 10;
    cout << value << endl;
}

void incorrectNaming()
{
    /* throws compilation error. */
    // int 1Value = 20;
    // cout << 1value << endl;
}
int main(void)
{
    correctNaming();
    value++;
    cout << value << endl;
    return 0;
}