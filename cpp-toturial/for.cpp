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
    int myFavNums[5];

    int badNums[5] = {4, 13, 14, 24, 34};

    cout << "Bad Number 1: " << badNums[0] << endl;

    char myName[5][5] =  {{'D', 'e', 'r', 'e', 'k'},
                          {'B', 'a', 'n', 'a', 's'}};

    cout << "2nd letter in 2nd array " << myName[1][1] << endl;

    myName[0][2] = 'e';

    cout << "New Value " << myName[0][2] << endl;

    for (int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    for (int j = 0; j < 2; j++){
        for (int k = 0; k < 5; k++){
            cout << myName[j][k];
        }
    }

    return 0;
}
