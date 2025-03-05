#include <iostream>

using namespace std;

class Box
{
    private:
    int l,b,h;
    public:
    Box()
    {
        l=b=h=0;
    }
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(Box& B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    void getparameters();
    // {
    //     cout << "Length = " << l << " Breadth = " << b << " Height = " << h << endl;
    // }
    long long getVolumeOfBox()
    {
        return static_cast<long long>(l*b*h);
    }
    ~Box()
    {
        cout << "Destructor called" << endl;
    }

};

/* Getting the parameters by nitializing the function outside the class. */ 
void Box::getparameters()
{
    cout << "Length = " << l << " Breadth = " << b << " Height = " << h << endl;
}

int main()
{
    Box myBox1(20,30,40);
    myBox1.getparameters();
    long long result = myBox1.getVolumeOfBox();
    cout << "The volume of the box is " << result << endl;
    return 0;
}