/*****************************************************************************************************************************************
 ***********************************************Priyanka Binary to Deciaml Convertor****************************************************************
*****************************************************************************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int binaryToDecimal(string binaryStr) {
    int decimalNum = 0;
    int power = binaryStr.length() - 1;

    for (char digit : binaryStr) {
        decimalNum += (digit - '0') * pow(2, power);
        power--;
    }

    return decimalNum;
}

int main() {
    string binaryInput;
    cout << "Enter a binary number: ";
    cin >> binaryInput;
    try {
        int decimalOutput = binaryToDecimal(binaryInput);
        cout << "The decimal equivalent is: " << decimalOutput <<endl;
    } catch (...) {
        cout << "Invalid binary input. Please enter a valid binary number." << endl;
    }

    return 0;
}
