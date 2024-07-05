#include <iostream>
using namespace std;

// int main(){
//     int x, y;
//     x = 19;
//     y = 29;
//     if(x>y){
//         cout<<x<< " variable is greater than "<<y <<" varaiable"; 
//     }
//     else{
//         cout<<x<< " variable is smaller than "<<y <<" varaiable"; 

//     }
//     return 0;
// }


int main(){

    int number;
    cout<<"Enter a number\n";
    cin>>number;

    if(number <7){
        cout<<"this number is small";
    }else if(number ==7){
        cout<<"this number is equal 7 ";
    }
    else{
        cout<<"this number is not small";

    }

    return 0;
}