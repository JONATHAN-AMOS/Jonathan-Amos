#include <iostream>
#include <cctype>
using namespace std;

void countVowelsConsonants(string str, int& vowels, int& consonants) {
    vowels = consonants = 0;
    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels, consonants;
    countVowelsConsonants(str, vowels, consonants);

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;

    return 0;
}
