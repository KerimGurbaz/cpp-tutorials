#include <iostream>
using namespace std;

void f(const int& p1, const char& p2) {
    cout << p1 << " , " << p2 << endl;
}

int main() {
    const int ci = 65;
    const char cc = 'B';
    int vi = 67;
    char vc = 'D';

    f(vi, vc);    // Valide
    f(vc, vi);    // Toujours une erreur, types incorrects
    f(ci, vc);    // Valide
    f(vi, cc);    // Valide
    f(67, vc);     // Valide
    f(vi, 'E');    // Valide
    return 0;
}
