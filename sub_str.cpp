#include <iostream>
#include <string>
using namespace std;

int main(){

    string txt = "Now step live, Where did you buy it ?? ";
    string txt2= txt.substr(5,7);

    int i =  txt.find("did");

    cout<<txt2<<endl;

    cout<<i<<endl;


    return 0;
}