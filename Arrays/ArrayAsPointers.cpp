#include <iostream>

using namespace std;

int main(void)
{
    int val[3] = {0xAA,0xBB,0xCC};
    for(int i = 0; i < (sizeof(val)/sizeof(val[0])); i++)
    {
        cout << static_cast<char>(val[i]) << endl;
    }
    return 0;
}