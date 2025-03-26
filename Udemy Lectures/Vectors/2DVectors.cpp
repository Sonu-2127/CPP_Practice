#include "Vectors.h"

vector <vector<int>> twoDimentionalVectors 
{   {1,0,0},
    {0,1,0},
    {0,0,1},
}; // 2-D vector declaration and initialization

int main(void)
{
    int totalElements = 0;
    for (const vector<int>& row : twoDimentionalVectors) {
        totalElements += row.size();
    }
    cout << "Total number of elements: " << totalElements << endl;
    return 0;
}