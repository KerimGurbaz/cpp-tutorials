#include <iostream>

using namespace std;

int main(){

    short int x,y, gcd(1), lcm, smallNumber, i ; //GCD (Greatest Common Divisor) end LCM (Least Common Multiple)

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
        lcm = x*y/gcd;
        cout<<" greatest common divisor(GCD) is " <<gcd<<endl;
    }else{
        lcm = x*y;
        cout<<"greatest common divisor(GCD) is 1 \n ";
    }
        cout<<" least common divisor(LCM) is " <<lcm;




    return 0;
}