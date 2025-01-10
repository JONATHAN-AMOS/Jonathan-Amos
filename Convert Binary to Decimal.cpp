#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    
    while (binary > 0) {
        int last_digit = binary % 10;
        decimal += last_digit * base;
        binary /= 10;
        base *= 2;
    }
    
    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    
    return 0;
}
