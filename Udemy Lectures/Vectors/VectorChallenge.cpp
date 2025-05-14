#include "Vectors.h"

vector <int> vector1;
vector <int> vector2;
vector <vector<int>> vector_2d;
int main(void)
{
    vector1.push_back(10);
    vector1.push_back(20);
    for(int i = 0; i < vector1.size(); i++)
    {
        cout << vector1.at(i) << endl;
    }

    vector2.push_back(100);
    vector2.push_back(200);
    for(int i = 0; i < vector2.size(); i++)
    {
        cout << vector2.at(i) << endl;
    }
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Number of rows in vector_2d: " << vector_2d.size() << endl;

    for (size_t i = 0; i < vector_2d.size(); i++) {
        cout << "Row " << i + 1 << ": ";
        for (size_t j = 0; j < vector_2d.at(i).size(); j++) {
            cout << vector_2d.at(i).at(j) << " ";
        }
        cout << endl;
    }

    vector1.at(0) = 1000;
    
    for (size_t i = 0; i < vector_2d.size(); i++) {
        cout << "Row " << i + 1 << ": ";
        for (size_t j = 0; j < vector_2d.at(i).size(); j++) {
            cout << vector_2d.at(i).at(j) << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < vector1.size(); i++)
    {
        cout << vector1.at(i) << endl;
    }
    return 0;
}