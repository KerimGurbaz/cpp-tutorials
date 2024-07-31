#include <iostream>
using namespace std;

void print(string fname, char letter, string myPlus);

int main (){

    print(" Kerim ", 'C', "++");
    print(" GURBAZ ",'C', "++");

    return 0;
}

void print(string fname, char letter, string myPlus){
    cout<<"Hello "<<fname<<"and "<<letter<<myPlus <<endl;
}