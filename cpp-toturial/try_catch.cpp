#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


int main()
{
    // basic exception handling

    int number = 0;

    try {
        if (number != 0){
            cout << 2/number << endl;
        } else throw (number);
    }
    catch (int number){
        cout << number << " is not valid" << endl;
    }

    return 0;
}
