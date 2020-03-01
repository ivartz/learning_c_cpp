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

    string numberGuessed;
    int intNumberGuessed = 0;

    do {

        cout << "Guess between 1 and 10: ";

        getline(cin, numberGuessed);

        intNumberGuessed = stoi(numberGuessed);

        cout << intNumberGuessed << endl;


    } while (intNumberGuessed != 4);

    cout << "You win" << endl;


    return 0;
}
