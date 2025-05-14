#include "Vectors.h"

void printVector(const vector<int>& vec) {
    for (const int& value : vec) {
        cout << value << endl;
    }
}

void addNewElement(int elementValue, vector<int>& vec) {
    vec.push_back(elementValue);
}

void deleteLastElement(vector<int>& vec)
{
    vec.pop_back();
}

int main() {
    vector<int> test_scores {10, 20, 30, 40, 50};

    cout << "Initial test scores:" << endl;
    printVector(test_scores);

    addNewElement(100, test_scores);

    cout << "Test scores after adding a new element:" << endl;
    printVector(test_scores);

    deleteLastElement(test_scores);
    cout << "Test scores after deleting the last element:" << endl;
    printVector(test_scores);


    return 0;
}