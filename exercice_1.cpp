#include <iostream>
using namespace std;

int main(){

for (int i = 1; i <= 5; ++i) {
    switch (i) {
        case 4 :
            cout << "D";
        case 2 :
            cout << "B";
            break;
        default :
            cout << "E";
        case 3 :
            cout << "C";
            continue;
        case 1 :
            cout << "A";
    }
    cout << "F" << endl;
}

}


