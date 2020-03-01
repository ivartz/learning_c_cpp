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

int addNumbers(int firstNum, int secondNum = 0){

    int combinedValue = firstNum + secondNum;

    return combinedValue;

}

// overload the function
int addNumbers(int firstNum, int secondNum, int thirdNum){

    return firstNum + secondNum + thirdNum;

}

// recursive function
int getFactorial(int number){
    int sum;
    if (number == 1) sum = 1;
    else sum = getFactorial(number - 1) * number;
    return sum;

    //getFactorial(2) [Returns 2] * 3 = 6
    //getFactorial(1) [Returns 2] * 2
}
int main()
{

    cout << addNumbers(1) << endl;

    cout << addNumbers(1, 5, 6) << endl;

    cout << "The factorial of 3 is " << getFactorial(3) << endl;

    return 0;
}
