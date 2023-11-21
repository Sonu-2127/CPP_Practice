#include <iostream>
using namespace std;
class employee{
    char name[30];
    int age;
    public:
    void getdata(void);
    void putdata(void);  
};

void employee :: getdata(void){
    cout << "Enter Name: " <<  endl;
    cin >> name;
    cout << "Enter Age" << endl;
    cin >> age;
} 

void employee :: putdata(void){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
const int len = 3;
int main(void){
    employee manager[len];
    for(int i = 0; i < len; i++){
        manager[i].getdata();
    }
    for(int i = 0; i < len; i++){
        cout << "Details of Manager " << i+1 << " is: " <<  endl;
        manager[i].putdata();
    }
}