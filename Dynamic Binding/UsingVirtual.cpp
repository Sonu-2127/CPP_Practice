#include <iostream>

using namespace std;

class GFG
{
    public:
    virtual void print()
    {
        cout << "Message printed from Base Class" << endl;
    }
    void call_function()
    {
        print(); 
    }
    
};

class GFG2 : public GFG
{
    public:
    void print() override
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