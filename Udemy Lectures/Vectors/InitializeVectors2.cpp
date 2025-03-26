#include "Vectors.h"
#include <array>

vector <int> test_scores; //empty vector of 0 size
vector <int> test_scores1(5); // vector of 5 elements and all assigned to 0
vector <int> test_scores2(5,100); // all 5 places value stored is 100
std::array <int,5> myArray {1,2,3,4,5};

int main(void)
{
    test_scores.push_back(10);
    cout << test_scores.at(0) << endl;
    for (const auto& value : test_scores1) //auto can also be used
        cout << value << endl;
    
    for (const int& value : test_scores2)
        cout << value << endl;
    
    for (const int& value : myArray) // C++11 range based looping
        cout << value << endl;
    return 0;
}