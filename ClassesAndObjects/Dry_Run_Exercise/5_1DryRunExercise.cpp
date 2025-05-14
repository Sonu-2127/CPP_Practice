#include <iostream>
using namespace std;

class personal{
    public:
    int func();
};
int personal :: func(){
    return 1;
}

int main(void){
    personal a;
    // a.x = &personal :: func(void); // error because check pointer to member function code
    // int (personal::* x)()  = &personal :: func; // solution
    // cout << (a.*x)() << endl;
}
