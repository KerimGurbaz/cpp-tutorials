#include <iostream>
#include <string>
using namespace std;

    int sumInt(int, int);
    double sumDouble(double, double);

int main(){

    int x = sumInt(7,5);
    double y = sumDouble(7.21, 6.18);

    cout<<"int : "<<x<<"\n";
    cout<<"Double : "<<y<<"\n";

    return 0;
}

int sumInt(int x, int y){
    return x+y;
}

double sumDouble(double x, double y){
    return x+y;
}