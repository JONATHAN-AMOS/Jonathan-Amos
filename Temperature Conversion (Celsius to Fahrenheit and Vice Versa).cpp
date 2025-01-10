#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    double temp;
    char choice;
    cout << "Choose conversion (C for Celsius to Fahrenheit, F for Fahrenheit to Celsius): ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << temp << "°C = " << celsiusToFahrenheit(temp) << "°F" << endl;
    } else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << temp << "°F = " << fahrenheitToCelsius(temp) << "°C" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
