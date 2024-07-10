#include <iostream>

using namespace std;

int main(){

    int number, i,factorial = 1;

    cout<<"Enter a number : ";
    cin>>number;

    if(number<0){
        cout<<"Please enter number greater then zero !";
    }else{
        for(i=1; i<=number; i++){
            factorial = factorial*i;
        }
        cout<<number<<"! = "<<factorial<<"\n";
    }


    return 0;
}