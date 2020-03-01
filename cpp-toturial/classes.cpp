#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Animal{
    /*
    Attributes : height weight
    Capabilities : Run Eat functions / methods
    */
    // private means attributes within private
    // are only allowed to be changed by functions
    // inside the class
    private:
        int height;
        int weight;
        string name;

        // static before a variable type declaration
        // means that this variable is shared among
        // all instances of this class
        static int numOfAnimals;

    // public functions / methods are able to
    // modify the variables inside private
    public:
        int getHeight(){ return height; }
        int getWeight(){ return weight; }
        string getName(){ return name; }
        void setHeight(int cm){ height = cm; }
        void setWeight(int kg){ weight = kg; }
        void setName(string animalName){ name = animalName; }

        // declare prototype
        void setAll(int, int, string);

        // Constructor
        // is created whenever and object is created
        // an instance of the class
        Animal(int, int, string);

        // Destructor
        ~Animal();

        // Constructor that does nothing.
        // An example of overloading (again).
        // Function name is the same,
        // but the attributes need to be different
        Animal();

        // Static method: belongs to the class and not the object
        // NB; STATIC METHODS CAN ONLY ACCESS STATIC MEMBER
        // VARIABLES, SUCH AS numOfAnimals HERE
        static int getNumOfAnimals(){ return numOfAnimals; }

        void toString();
};

// Declare.
// nothing to do with the object
// itself
int Animal::numOfAnimals = 0;

/*
void Animal::setAll(int height, int weight, string name){
    // uses this -> to refer to an object-specific heigth etc.
    // (belonging to an object/instnace).
    // this needs to be done since the class is created before
    // instances/objects of the class are created
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
    Animal::numOfAnimals++;
}
*/

Animal::Animal(int height, int weight, string name){
    // uses this -> to refer to an object-specific heigth etc.
    // (belonging to an object/instnace).
    // this needs to be done since the class is created before
    // instances/objects of the class are created
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
    Animal::numOfAnimals++;
}

Animal::~Animal(){
    cout << "Animal " << this -> name << " destroyed" << endl;
}

Animal::Animal(){
    Animal::numOfAnimals++;
}

void Animal::toString(){
    cout << this -> name << " is " << this -> height <<
            " cms tall and " << this -> weight <<
            " kgs in weight" << endl;
}

class Dog : public Animal{
private:
    string sound = "Woof";

public:
    void getSound() { cout << sound << endl; }
    Dog(int, int, string, string);
    Dog() : Animal(){}
    void toString();
};

Dog::Dog(int height, int weight, string name, string bark) :
    Animal(height, weight, name){
    this -> sound = bark;
}

void Dog::toString(){
    cout << this -> getName() << " is " << this -> getHeight() <<
            " cms tall and " << this -> getWeight() <<
            " kgs in weight and says " << this -> sound << endl;
}

int main()
{
    Animal fred;
    fred.setHeight(33);
    fred.setWeight(10);
    fred.setName("Fred");

    cout << fred.getName() << " is " << fred.getHeight() <<
            " cms tall and " << fred.getWeight() <<
            " kgs in weight" << endl;

    Animal tom (36, 15, "Tom");

    cout << tom.getName() << " is " << tom.getHeight() <<
            " cms tall and " << tom.getWeight() <<
            " kgs in weight" << endl;

    Dog spot(38, 16, "Spot", "Woof");

    cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;

    spot.getSound();

    tom.toString();
    spot.toString();

    // :: Scope operator
    spot.Animal::toString();

    return 0;
}
