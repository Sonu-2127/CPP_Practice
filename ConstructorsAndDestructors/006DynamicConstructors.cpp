#include <iostream>
#include <cstring>
using namespace std;

class String{
    char *name;
    int length;
    public:
    String(){
        length = 0;
        name = new char[length+1];
    }
    String(char *s){
        length = strlen(s);
        name = new char[length+1];
        strcpy(name,s);
    }
    void display(void){
        cout << name << "\n";
    }
    void join(String &, String &);
};
void String :: join(String &a, String &b){
    length = a.length+b.length;
    delete name;
    name  = new char[length+1];
    strcpy(name,a.name);
    strcat(name,b.name);
}

int main(void){
    char *first_name = "Nishant ";
    String S1(first_name),S3,S4(" is a good boy"),S5;
    S1.display();
    String S2("Patra");
    S2.display();
    S3.join(S1,S2);
    S3.display();
    S5.join(S3,S4);
    S5.display();
    return 0;
}