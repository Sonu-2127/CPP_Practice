#include <iostream>

using namespace std;


class Animal
{
    public:
    void animalSound()
    {
        cout << "This is how the animal sound" << endl;
    }
};

class Dog : public Animal
{
    public:
    void animalSound()
    {
        cout << "Dog sounds Bow Bow" << endl;
    }

};

class Cat : public Animal
{
    public:
    void animalSound()
    {
        cout << "Cat sounds Meow Meow" << endl;
    }

};

int main()
{
    Animal obj3;
    obj3.animalSound();
    Dog obj1;
    obj1.animalSound();
    Cat obj2;
    obj2.animalSound();
    return 0;
}