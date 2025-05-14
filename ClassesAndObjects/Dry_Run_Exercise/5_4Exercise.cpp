#include <iostream>
using namespace std;

class age{
    private:
    int child_age;
    public:
    age():child_age(20){}
    int father_age(age);
};

int age :: father_age(age d){
    d.child_age+=15; // why this line is not working?
    return child_age;
}

int main(void){
    age D1,D2;
    cout << "Father age: " << D2.father_age(D1) <<  endl;
    return 0;
}