#include <iostream>
#include <string>
using namespace std;

int main(){

    // string txt;
    // cout<< "Enter a string : " ;
    // getline (cin, txt);
    // if(!txt.empty())
    // cout<<"your text : "<<txt<<"\n";

    // else
    // cout<<"The string is empty\n";   


    string txt1, txt2, txt3, largest , txt4(3,'.');


    txt1 = "strawberry";
    txt2 = "star";
    txt3 = "soup";
    if((txt1 >txt2) && (txt1 >txt3))
        largest =txt1;

    else if((txt2 >txt3) && (txt2 >txt3))

    largest =txt2;

    else
    largest = txt3;

    cout<<"largest : " << largest<<txt4<<" \n";


    return 0;
}
