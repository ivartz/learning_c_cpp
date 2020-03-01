#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// This is a comment
/*
 * this is a multiline comment
 *
*/

int main()
{
    cout << "Hello World!" << endl;

    // const variables only have
    // uppercase variables by default
    const double PI = 3.1415926535;

    char myGrade = 'A';

    bool isHappy = true;

    int myAge = 39;

    float favNum = 3.141592;

    double otherFavNum = 1.6180339887;

    cout << "Favourite Number " << favNum << endl;

    /* Other types include
     * short int : At least 16 bits
     * long int : At least 32 bits
     * long long int : At least 64 bits
     * unsigned int : Same as signed version
     * long double : Not less than double
     */

    // sizeof(variable) gives the number of bytes
    // that this variable takes
    cout << "Size of int " << sizeof(myAge)
         << endl;

    // add 1 and this number becomes
    // -2147483648 because of overflow
    int largestInt = 2147483647;

    cout << "Largest int " << largestInt << endl;

    // arithmetics
    // +, -, *, /, %, ++, --
    cout << "5+2=" << 5+2 << endl;
    cout << "5-2=" << 5-2 << endl;
    cout << "5*2=" << 5*2 << endl;
    // note; 5/2 gives 2 and not 2.5
    // since all numbers are of type int
    cout << "5/2=" << 5/2 << endl;
    cout << "5%2=" << 5%2 << endl;

    int five = 5;
    cout << "5++=" << five++ << endl;
    cout << "++5=" << ++five << endl;
    cout << "5--=" << five-- << endl;
    cout << "--5=" << --five << endl;

    five += 6; five = five + 6;

    cout << five << endl;

    // Order of Operation states * and / is performed
    // before + and -
    cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
    cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3 ) * 2 << endl;

    cout << "4 / 5 = " << 4 / 5 << endl;
    // casting in order to have floiting point division
    cout << "4 / 5 = " << static_cast<float> (4) / 5 << endl;
    cout << "4 / 5 = " << (float) 4 / 5 << endl;

    // if statements
    // ==, !=, >, <, >=, <=,
    // &&, ||, !

    int age = 70;
    int ageLastExam = 16;
    bool isNotIntoxicated = true;


    return 0;
}
