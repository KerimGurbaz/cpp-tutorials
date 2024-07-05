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

    int number1, number2;
    cout<<"Enter a number\n";
    cin>>number1;
    cout<<"Enter another number\n";
    cin>>number2;

    if(number1 <number2){
        cout<<number1 *number2;
    }else if(number1 == number2){
        cout<< number1 / number2;
    }
    else{
        cout<<number1 +number2;

    }

    return 0;
}