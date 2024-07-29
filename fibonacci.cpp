#include <iostream>
using namespace std;


int main(){
    int first = 1, second = 1, third =1, number, i;
    cin>> number;

    cout<<"\n1 1 ";
    for(i=0; i<= number-2 ; i++){
        first =second;
        second = third;
        third = first + second ;
        cout<<third<< " ";

    }


    return 0;
} 