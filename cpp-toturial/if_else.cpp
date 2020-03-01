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

    int age = 70;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;

    if ((age >= 1) && (age < 16)){
        cout << "You can't drive" << endl;
    } else if ( !isNotIntoxicated){
        cout << "You can't drive" << endl;
    } else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
        cout << "You can't drive" << endl;
    } else {
        cout << "You can drive" << endl;
    }
    return 0;
}
