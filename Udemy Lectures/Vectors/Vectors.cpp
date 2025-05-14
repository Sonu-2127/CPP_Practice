#include "Vectors.h"


vector<int> numbers;
vector<char> vowels (5); //automatically initializes to 0. Since it is char so it will "\0" which is NULL
vector<int> test_scores (10); //automatically initializes to 0.
vector<char> myVowels {'a','e','i','o','u'}; //initializes manually

int main(void)
{
    cout << vowels.at(4)<< endl;
    cout << test_scores.at(4)<< endl;
    return 0;
}