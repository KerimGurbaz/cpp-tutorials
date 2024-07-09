#include <iostream>
using namespace std;

int main() {
    int number, i;
    bool isPrime = true;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 2) {
        cout << "Please enter a number greater than one\n";
        return 0;
    }

    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << number << " is a prime number\n";
    } else {
        cout << number << " is not a prime number\n";
    }

    return 0;
}
