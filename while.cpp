#include <iostream>
using namespace std;

int main(){
    // int i = 1;
    // while(i<=7){

    //     cout<<"C++ is a wonderful language - "<<i<<endl;
    //     i++;


    // }

    short int number(1);

    while(number!=0){
    cout<< "Please enter a number (1-10) : ";
    cin>>number;
    if(number<1 || number >10){
        cout<<"Please enter between 1 and 10 "<<endl;

    }else{
        short int i(1) ;
        while(i<=10 && number!=0){
            cout<<i<< " X "<< number<<" = "<< i * number <<endl;
            i++;
        }
    }

    }


    return 0;
}