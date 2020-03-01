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

    int greetingOption = 2;

    switch (greetingOption){

    case 1 :
        cout << "bonjour" << endl;
        break;
    case 2 :
        cout << "Hola" << endl;
        break;
    case 3 :
        cout << "Hallo" << endl;
        break;
    default :
        cout << "Hello" << endl;
    }

    return 0;
}
