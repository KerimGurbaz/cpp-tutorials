#include <iostream>
using namespace std;

int main(){

//     short int i(3);

//    do {
//         cout<<i<<"\t";
//         i++;

//     }while(i<7);


//     return 0;

    short int number, i=1 ;

    do{
        i=0;
        cout<<"enter a number : ";
        cin>>number;
        if(number <1 || number >50)
        break;
        while(i<number){
            cout<< i <<" ";
            i++;
        }
        cout<<"\n";

    }while(number >=1 && number <=50);

}