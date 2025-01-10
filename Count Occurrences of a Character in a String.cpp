#include <iostream>
using namespace std;

int countOccurrences(string str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    char ch;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "Enter the character to count: ";
    cin >> ch;
    
    int result = countOccurrences(str, ch);
    cout << "The character '" << ch << "' appears " << result << " times." << endl;
    
    return 0;
}
