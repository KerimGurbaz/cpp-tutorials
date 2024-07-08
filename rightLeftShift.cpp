#include <iostream>
using namespace std;

int main(){

    /*
    short int x(80);
    x<<=3; // =>  80 * 2**3
    x>>=3; // =>  80 / 2**3

    cout<<"x : "<<x<<"\n";
    
    */

   short int number, result, ab, cd;

   cout<<"Enter a positive four-digit number : ";

   cin>>number;

   ab = number / 100 ;
   cd = number % 100 ;

   result = (ab + cd) *(ab + cd);

   if(result == number){
    cout<<number<<" is a special number \n";
   }else{
    cout<<number<<" is not a special number \n";

   }


    return 0;
}