#include <iostream>
#include <cmath>
using namespace std;

int main(){

    /*
    short int x(80);
    x<<=3; // =>  80 * 2**3
    x>>=3; // =>  80 / 2**3

    cout<<"x : "<<x<<"\n";
    
    */

//    short int number, result, ab, cd;

//    cout<<"Enter a positive four-digit number : ";

//    cin>>number;

//    ab = number / 100 ;
//    cd = number % 100 ;

//    result = (ab + cd) *(ab + cd);

//    if(result == number){
//     cout<<number<<" is a special number \n";
//    }else{
//     cout<<number<<" is not a special number \n";

//    }

// char myCharacter;
// cout<<"Enter a character : ";
// cin>>myCharacter;

// if((myCharacter>='A') && (myCharacter<='Z')){
//     cout<<myCharacter<<" is a capital letter\n";
// }else if((myCharacter>='a') && (myCharacter<='z')){
//      cout<<myCharacter<<" is a lowercase letter\n";
// }else{
//      cout<<myCharacter<<" is not a letter\n";
// }
int number, result;

cout<<"Enter a positive number : ";
cin>>number;

if(number<=0){
    cout<<"Please do not enter a negative number or zero\n ";
}else{
    result = sqrt(number);
    result *=result;
    if(result == number){
        cout<<"square root of "<<number<<" is an integer \n";
    }else{
        cout<<"The number entered is not an integer\n";
    }
}



    return 0;
}