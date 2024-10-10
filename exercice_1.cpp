#include <iostream>
using namespace std;
/*
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
*/
int main (){

for (int i = 'C'; i >= 'A'; --i) {
    switch (i) {
        case 'B':
            cout << 2;
            break;
        default:
            cout << 1;
        case 'C':
            cout << 3;
            continue;
    }
    cout << 0;
}

    return 0;
}




