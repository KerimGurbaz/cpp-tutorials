#include <iostream>
using namespace std;



int main(){
    // int number;

    // cout<<"Enter a number : ";
    // cin>>number;

    // if(number<0){
    //     cout<<"Please dont enter negative number\n";
    // }else{
    //     if(number % 2 == 0){
    //         cout<<number<<" is an even number"<<endl;
    //     }else{
    //         cout<<number <<" is an odd number"<<endl;
    //     }
    // }

    int x,y,z,myMin, myMax;
    cout<<"Enter three numbers : ";
    cin>> x>>y>>z;
    if(x>y && x>z){
        myMax = x;
        myMin = (y<z) ? y:z;
    }else if(y>x && y>>z){
        myMax =y;
        myMin = (x<z) ? x:z;
    }else{
        myMax = z;
        myMin = (x<y) ? x:y;
    }

    cout<<"my maximum number is "<< myMax<< endl;
    cout<<"my minumum number is "<< myMin<< endl;

return 0;
}