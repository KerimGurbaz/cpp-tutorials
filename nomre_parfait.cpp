#include <iostream>
using namespace std;

// int main(){

//     int number, i , sum =0;
//     cout<<"Enter a number : ";
//     cin>> number;
//     for(i=1; i<=number/2; i++){
//         if(number %i == 0)
//             sum +=i;
//     }
//         if(sum == number){
//             cout<<number<<" is a parfait number";
//         }else{
//             cout<<number<<" is not a parfait number";
//         }

//    return 0;

// }

//to find perfect numbers up to the entered number
int main(){

    int number, i ,j, sum=0;
    cout<<"Enter a number : ";
    cin>> number;
    for(i=1; i<=number; i++){
        sum=0;
        for(j=1; j<=i/2; j++){
             if(i %j == 0)
            sum +=j;
        }
       
        if(sum == i){
            cout<<i<<" is a parfait number"<<endl;
        }
    }
   return 0;

}