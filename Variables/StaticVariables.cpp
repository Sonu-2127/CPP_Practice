#include <iostream>

using namespace std;

void func1(void)
{
    static int value = 10;
    if(value<12)
    {
        value++;
    }
    else
    {
        value--;
    }
    cout << "Value is " << value << endl;
}

int main(void)
{
    func1();
    func1();
    func1();
    return 0;
}