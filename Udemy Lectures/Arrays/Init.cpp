#include "Arrays.h"

int test_scores [10] {97,95,99};
const int MAX_SIZE_OF_ELEMENTS {10};

int max_size_elements [MAX_SIZE_OF_ELEMENTS] = {0};
int unknown_size_array [] {1,2,3,4,5};
int main(void)
{
    int size = sizeof(unknown_size_array)/sizeof(unknown_size_array[0]);
    cout << size << endl;
    for (int i = 0; i < size; i ++)
    {
        cout << unknown_size_array[i] << endl;
    }
    return 0;
}