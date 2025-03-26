#include <iostream>

using namespace std;

class MyParents
{
    private:
    int parentsAgeAverage = 10;
    public:
    void showData(int age)
    {
        parentsAgeAverage = age;
        cout << "Parents age is " << parentsAgeAverage <<  endl;
    }
};

class FriendParents : public MyParents
{
    public:
    using MyParents::showData; // gives access to the function of the base class
    void showData()
    {
        cout << "Age not yet defined" << endl;
    }

};

int main()
{
    FriendParents teraGhar;
    teraGhar.showData(35);
    teraGhar.showData();
    return 0;
}
