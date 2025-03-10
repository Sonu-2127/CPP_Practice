#include <iostream>

using namespace std;

int num[2][3] = {{1,2,3},{4,5,6}};

int main()
{
    int *ptr = &num[0][0];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << *(ptr + i * 3 + j) << "\t";
        }
        cout << "\n";
    }
    return 0;
}