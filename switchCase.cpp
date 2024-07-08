#include <iostream>
using namespace std;

int main(){

    /*
    int day;
    cout<<"Enter a day number : ";
    cin>> day;
    switch(day){
        case 1: cout<<"Monday\n";break;
        case 2: cout<<"Tuesday\n";break;
        case 3: cout<<"Wednesday\n";break;
        case 4: cout<<"Thursday\n";break;
        case 5: cout<<"Friday\n";break;
        case 6: cout<<"Saturday\n";break;
        case 7: cout<<"Sunday\n";break;
        default:cout<<"There is no such a day\n";
    }
    */

   int x(9), y(-3), result;
//    result = (x==7)? 19 : ((y==19) ? 10 : -928374);

//    cout<<"result : "<<result<<"\n";

switch (x)
{
case 7:
   result =19;
    break;

default: switch(y){
    case 12: result =10; break;
    default:result = -7;
}

}

cout<< "result : "<<result<<"\n";

    return 0;
}
