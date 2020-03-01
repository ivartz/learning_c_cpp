#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Passing by pointer
void makeMyYoung(int* age){
    cout << "I used to be " << *age << endl;
    *age = 21;
}

// Passing by reference
void actYourAge(int& age){
    age = 39;
}

int main()
{

    int myAge = 39;
    char myGrade = 'A';

    // sizeof gives number of bytes of the argument
    cout << "Size of int " << sizeof(myAge) << endl;
    cout << "Size of char " << sizeof(myGrade) << endl;

    // & is reference operator

    cout << "myAge is located at " << &myAge << endl;

    //int sum = 5;
    // call by value
    // copies sum .
    // later update of sum
    // is not visible within addThese
    //addThese(sum)

    // call by reference
    // (using pointer operator (*) and reference operator (&))
    // later update of sum is
    // visible in addThese

    // declare and define a pointer
    // pointing to the memory address of myAge
    // NB: * AFTER TYPE IN DECLARATION MEANS POINTER DECLARATION!
    // NB: & BEFORE VARIABLE CALL MEANS REFERENCING
    // (FROM VALUE TO MEMORY ADRRESS. GETTING MEMORY ADDRESS)!
    int* agePtr = &myAge;
    cout << "Address of pointer " << agePtr << endl;

    // de-referencing the pointer to get the data
    // NB: * BEFORE POINTER CALL MEANS DE-REFERENCING!
    // (FROM MEMORY ADDRESS TO VALUE. GETTING THE ACTUAL VALUE
    // STORED ON THE MEMORY ADDRESS)
    cout << "Data at memory address " << *agePtr << endl;

    // Pointer (*) and reference (&) with arrays
    int badNums[5] = {4, 13, 14, 24, 34};
    int* numArrayPtr = badNums;
    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
    numArrayPtr++;
    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
    cout << "Address " << badNums << " Value " << *badNums << endl;

    makeMyYoung(&myAge);
    cout << "I'm " << myAge << " years old now" << endl;

    int& ageRef = myAge;

    cout << "myAge : " << myAge << endl;
    ageRef++;
    cout << "myAge : " << myAge << endl;
    actYourAge(ageRef);

    cout << "myAge : " << myAge << endl;

    return 0;
}
