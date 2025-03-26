#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    int number;
    char comma;
    while(ss >> number)
    {
        result.push_back(number);
        ss >> comma;
    }
    return result;
}

int main() {
    string str = "23,4,6";
    // cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}