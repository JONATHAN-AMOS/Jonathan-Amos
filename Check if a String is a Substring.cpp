#include <iostream>
#include <string>
using namespace std;

bool isSubstring(string str1, string str2) {
    return str1.find(str2) != string::npos;
}

int main() {
    string str1, str2;
    
    cout << "Enter the first string: ";
    cin >> str1;
    
    cout << "Enter the second string: ";
    cin >> str2;
    
    if (isSubstring(str1, str2)) {
        cout << "\"" << str2 << "\" is a substring of \"" << str1 << "\"" << endl;
    } else {
        cout << "\"" << str2 << "\" is not a substring of \"" << str1 << "\"" << endl;
    }
    
    return 0;
}