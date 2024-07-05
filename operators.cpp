#include <iostream>
using namespace std;

int main(){
    int num1 = 12, num2 =4;
    int sum, sub, multi, div, mod;
    sum = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;

/*
cout<<"sum : "<< sum << endl;
cout<<"sub : "<< sub << endl;
cout<<"multi : "<< multi << endl;
cout<<"div : "<< div << endl;
cout<<"mod : "<< mod << endl;
*/
int x =7, y = 2, z = 4;
x++;
z--;
x=y++;
z=++x;
z = y--;
z = --y;

cout<<"x: "<<x<<"\n";
cout<<"y: "<<y<<"\n"; 
cout<<"z: "<<z<<"\n";




    return 0;
}