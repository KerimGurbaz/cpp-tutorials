#include <iostream>

using namespace std;

int num(){

    short int x,y, gcd =1, lcd, smallNumber, i ; //GCD (Greatest Common Divisor) end LCM (Least Common Multiple)

    cout<<"Enter two numbers : ";
    cin>>x>>y;

    if(x<y)
     smallNumber = x;

    else
     smallNumber =y;

    for(i = smallNumber; i > 1; i--){
        if((x%i == 0) && (y%i == 0)){
            gcd = i;
            break;
        }
    }

    if(gcd!=0){
        
    }




    return 0;
}