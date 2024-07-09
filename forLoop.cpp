#include <iostream>
using namespace std;

int main(){
/*

    short int i ;

    for(i=0; i<=10; i +=2){
        cout<<i<<" ";
    }
    cout<<endl;
*/

short i, j;

for(i=1; i<=3; i++){
    cout<<"C++ outer loop"<<i<<endl;
    for(j=1; j<=5; j++){
        cout<<"\t C++ inner loop : "<<j<<endl;
    }

}


    return 0;
}