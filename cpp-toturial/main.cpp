#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Animal{
public:
    virtual void makeSound(){ cout << "The Animal says grr" << endl; }
};

class Dog : public Animal{
public:
    void makeSound(){ cout << "The Animal says woof" << endl; }
};

class Cat : public Animal{
public:
    void makeSound(){ cout << "The Animal says meow" << endl; }
};

// abstract data type

class Car{
public:
    virtual void getNumWheels() = 0;
    virtual void getNumDoors() = 0;
};

class StationWagon : public Car{
public:
    void getNumWheels(){ cout << "Station wagon has 4 wheels" << endl; }
    void getNumDoors(){ cout << "Station wagon has 4 doors" << endl; }
    StationWagon() {}
    ~StationWagon();
};

int main()
{
    Animal* pCat = new Cat;
    Animal* pDog = new Dog;

    pCat -> makeSound();
    pDog -> makeSound();

    Car* stationWagon = new StationWagon();
    stationWagon->getNumWheels();

    return 0;
}
