#include <iostream>
using namespace std;

int main(){

    char myOperator;
    float x,y;
    cout<< "Choose un operator(+, -, *, /) : ";
    cin>>myOperator;
    cout<<"Enter two numbers : ";
    cin>>x>>y;

    switch(myOperator){
        case '+':cout<<"\nx + y = "<<x+y; break;
        case '-':cout<<"\nx - y = "<<x-y; break;
        case '*':cout<<"\nx * y = "<<x*y;break;
        case '/':cout<<"\nx / y = "<<x/y;break;

        default:cout<<"Wrong Choice\n";


    }




    return 0;
}