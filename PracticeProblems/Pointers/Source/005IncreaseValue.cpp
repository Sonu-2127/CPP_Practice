#include <iostream>

using namespace std;

void increase(void* data, int size)
{
    if(size == sizeof(char))
    {
        char* DataChar = (char*)data;
        (*DataChar)++;
    }
    else if(size == sizeof(int))
    {
        int* DataInt = (int*)data;
        (*DataInt)++;
    }
}

int main(void)
{
    char ch = 'x';
    int val = 90;
    increase(&ch, sizeof(ch));
    cout << "The new value of ch is " << ch << endl;
    increase(&val, sizeof(val));
    cout << "The new value of val is " << val << endl;
    return 0;
}