#include <iostream>
using namespace std;


#include <iostream>
#include <limits.h> // INT_MAX ve INT_MIN için gerekli
using namespace std;

int main() {
    int number, i = 1;
    int smallestN = INT_MAX;
    int largestN = INT_MIN;

    do {
        cout << i << "th number: ";
        cin >> number;
        if (number == 0) {
            break;
        }
        if (number < smallestN) {
            smallestN = number;
        }
        if (number > largestN) {
            largestN = number;
        }
        i++;
    } while (number != 0);

    if (i == 1) {
        cout << "No numbers entered." << endl;
    } else {
        cout << "Smallest number: " << smallestN << endl;
        cout << "Largest number: " << largestN << endl;
    }

    return 0;
}
