#include <iostream>
using namespace std;

int main(){

    // char myOperator;
    // float x,y;
    // cout<< "Choose un operator(+, -, *, /) : ";
    // cin>>myOperator;
    // cout<<"Enter two numbers : ";
    // cin>>x>>y;

    // switch(myOperator){
    //     case '+':cout<<"\nx + y = "<<x+y; break;
    //     case '-':cout<<"\nx - y = "<<x-y; break;
    //     case '*':cout<<"\nx * y = "<<x*y;break;
    //     case '/':cout<<"\nx / y = "<<x/y;break;

    //     default:cout<<"Wrong Choice\n";


    // }

    char letter;
    cout<<"Enter a letter : ";
    cin>>letter;
 switch(letter){
    case 'a':
    case 'e':
    case 'u':
    case 'o':
    case 'i':
    cout<<letter<<" is a vowel \n";
    break;
    default:cout<<letter  <<" is a consonant";
            cout<<" or not a letter "<<endl;break;



 }




    return 0;
}