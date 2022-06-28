#include <iostream>
#include <cmath>
using namespace std;

class Math {
public:
    int multiply(int, int);
    int divide(int, int);
    int add(int, int);
    int subtract(int, int);
    int modulus(int, int);
};

int Math::multiply(int a, int b) {
    return a * b;
}

int Math::divide(int a, int b) {
    return a / b;
}

int Math::add(int a, int b) {
    return a + b;
}

int Math::subtract(int a, int b) {
    return a - b;
}

int Math::modulus(int a, int b) {
    return a % b;
}

class Binary {
public:
    int binaryToDecimal(int);
};

int Binary::binaryToDecimal(int binary) {
    int decimal = 0;
    int i = 0;
    while (binary != 0) {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

class Meter {
public:
    int meterToFeet(int);
    int meterToInches(int);
    int meterToCentimeter(int);
};

int Meter::meterToFeet(int meter) {
    return meter * 3.28084;
}

int Meter::meterToInches(int meter) {
    return meter * 39.3701;
}

int Meter::meterToCentimeter(int meter) {
    return meter * 100;
}

int main() {
    Math math;
    int choice;

    do {
        cout << endl;
        cout << "************************************************************************" << endl;
        cout << "*                  Welcome to the Math Calculator!                     *" << endl;
        cout << "*                   Created by: Nathaniel Quitua                       *" << endl;
        cout << "************************************************************************" << endl;
        cout << "|Please select an option:                                              |" << endl;
        cout << "|1) Multiplication, Division, Addition, Subtraction, Modulus Operation |" << endl;
        cout << "|2) Binary to Decimal (0-10)                                           |" << endl;
        cout << "|3) Meter Conversion                                                   |" << endl;
        cout << "|    Meter - Feet                                                      |" << endl;
        cout << "|    Meter - Inches                                                    |" << endl;
        cout << "|    Meter - Centimeter                                                |" << endl;
        cout << "|4) Exit                                                               |" << endl;
        cout << "************************************************************************" << endl;
        cout << endl;
        cout << "Please enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice) {
            case 1:
                do {
                int a, b;
                int choice2;
                cout << "Please select an operation: " << endl;
                cout << "1) Addition" << endl;
                cout << "2) Subtraction" << endl;
                cout << "3) Multiplication" << endl;
                cout << "4) Division" << endl;
                cout << "5) Modulus" << endl;
                cout << "6) Exit" << endl;
                cout << endl;
                cout << "Please enter your choice: ";
                cin >> choice2;
                cout << endl;
                if (choice2 == 1) {
                    cout << "Please enter the first number: ";
                    cin >> a;
                    cout << "Please enter the second number: ";
                    cin >> b;
                    cout << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "The sum of " << a << " and " << b << " is " << math.add(a, b) << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << endl;
                } else if (choice2 == 2) {
                    cout << "Please enter the first number: ";
                    cin >> a;
                    cout << "Please enter the second number: ";
                    cin >> b;
                    cout << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "The difference of " << a << " and " << b << " is " << math.subtract(a, b) << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << endl;
                } else if (choice2 == 3) {
                    cout << "Please enter the first number: ";
                    cin >> a;
                    cout << "Please enter the second number: ";
                    cin >> b;
                    cout << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "The product of " << a << " and " << b << " is " << math.multiply(a, b) << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << endl;
                } else if (choice2 == 4) {
                    cout << "Please enter the first number: ";
                    cin >> a;
                    cout << "Please enter the second number: ";
                    cin >> b;
                    cout << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "The quotient of " << a << " and " << b << " is " << math.divide(a, b) << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << endl;
                } else if (choice2 == 5) {
                    cout << "Please enter the first number: ";
                    cin >> a;
                    cout << "Please enter the second number: ";
                    cin >> b;
                    cout << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "The modulus of " << a << " and " << b << " is " << math.modulus(a, b) << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << endl;
                } else if (choice2 == 6) {
                    cout << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "Going back to main menu..." << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << endl;
                    break;
                } else {
                    cout << "Invalid choice." << endl;
                }
                } while (choice != 6);
                break;
            case 2:
                Binary bin;
                int binary;
                char answer;
                do {
                    cout << "Enter a binary number: ";
                    cin >> binary;
                    if ( binary < 0 || binary > 1010 ) {
                        cout << endl;
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "Invalid binary number." << endl;
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << endl;
                    } else {
                        cout << endl;
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "The decimal number is: " << bin.binaryToDecimal(binary) << endl;
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << endl;
                    }
                    cout << "Do you want to convert another? (y/n): ";
                    cin >> answer;
                    cout << endl;
                    if (answer == 'n') {
                        cout << "Going back to main menu..." << endl;
                        break;
                    }
                } while (answer == 'y'); 
                cout << endl;
                cout << endl;
                break;
            case 3:
                Meter m;
                int meter;
                do {
                    cout << "Please enter a number in meters: ";
                    cin >> meter;
                    cout << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "The meter number in feet is: " << m.meterToFeet(meter) << endl;
                    cout << "The meter number in inches is: " << m.meterToInches(meter) << endl;
                    cout << "The meter number in centimeters is: " << m.meterToCentimeter(meter) << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << endl;
                    cout << "Do you want to convert another? (y/n): ";
                    cin >> answer;
                    cout << endl;
                    if (answer == 'n') {
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "Going back to main menu..." << endl;
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        break;
                    }
                } while (answer == 'y');
                break;
            case 4:
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << "Goodbye! Thank You for using my calculator. Have a nice day!" << endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    } while (choice != 4);
    return 0;
}