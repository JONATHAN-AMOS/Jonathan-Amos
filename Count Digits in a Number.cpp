#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "The number " << num << " has " << countDigits(num) << " digits." << endl;
    
    return 0;
}
