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

    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};


    string birthdayString = " Birthday";

    cout << happyArray + birthdayString << endl;

    string yourName;

    cout << "What is your name ";
    getline(cin, yourName);

    cout << "hello " << yourName << endl;

    string wholeName = yourName.assign(yourName);
    cout << wholeName << endl;

    string firstName = wholeName.assign(wholeName, 0, 5);
    cout << firstName << endl;

    int lastNameIndex = yourName.find("Banas", 0);
    cout << "Index for last name " << lastNameIndex << endl;

    yourName.insert(5, " Justin");
    cout << yourName << endl;

    yourName.erase(6, 7);
    cout << yourName << endl;

    yourName.replace(6, 5, "Maximus");
    cout << yourName << endl;


    string dogString = "dog";
    string catString = "cat";

    /*
    int intDogString;
    intDogString = atoi(dogString.c_str());
    int intCatString;
    intCatString= atoi(catString.c_str());

    cout << intDogString << endl;
    cout << intCatString << endl;
    */
    // returns 1 since dogString is less than catString
    // in alphabetic order
    cout << dogString.compare(catString) << endl;
    // if equal returns 0
    cout << dogString.compare(dogString) << endl;
    // returns -1 since catString is greater than dogString
    cout << catString.compare(dogString) << endl;


    double eulersConstant = .57721;

    string eulerGuess;

    double eulerGuessDouble;

    cout << "What is Euler's Constant? ";

    getline(cin, eulerGuess);

    eulerGuessDouble = stod(eulerGuess);

    if (eulerGuessDouble == eulersConstant){
        cout << "You are right" << endl;
    } else {
        cout << "You are wrong" << endl;
    }

    cout << "Size of string " << eulerGuess.size() << endl;
    cout << "Is string empty " << eulerGuess.empty() << endl;
    cout << eulerGuess.append(" was your gess") << endl;

    return 0;
}
