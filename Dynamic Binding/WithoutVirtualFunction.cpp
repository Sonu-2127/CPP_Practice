#include <iostream>

using namespace std;

class GFG
{
    public:
    void call_function()
    {
        print(); 
    }
    void print()
    {
        cout << "Message printed from Base Class" << endl;
    }
};

class GFG2 : public GFG
{
    public:
    void print()
    {
        cout << "Message printed from derived class" << endl;
    }

};

int main()
{
    GFG *geeksForGeeks  = new GFG();
    geeksForGeeks->call_function();

    GFG2 *geeksForGeeks2  = new GFG2();
    geeksForGeeks2->call_function();

    delete geeksForGeeks;
    delete geeksForGeeks2;
}