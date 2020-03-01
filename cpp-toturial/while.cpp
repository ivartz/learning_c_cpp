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
    // random number in intervval [1, 100]
    int randNum = (rand() % 100) + 1;

    while (randNum != 100){
        cout << randNum << ", ";
        randNum = (rand() % 100) + 1;
    }

    cout << endl;


    int index = 1;

    while (index <= 10){
        cout << index << endl;
        index++;
    }


    return 0;
}
