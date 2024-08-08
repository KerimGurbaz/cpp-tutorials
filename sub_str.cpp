#include <iostream>
#include <string>
using namespace std;

int main(){

    string txt = "Now step live, Where did you buy it ?? ";
    string txt2= txt.substr(5,7);

    int i =  txt.find("did");

    cout<<txt2<<endl;

    cout<<i<<endl;
    cout<<"merhaba: "<<9<<endl;
    cout<<"selam : "<<0.33 * 24<<endl;


    // string password ="hope";
    // string enterCode;

    // cout<<"Please enter your password: ";
    // getline(cin, enterCode);
    // if(password.compare(enterCode)!=0)
    // cout<<"password isn't correct"<<endl;
    // else
    // cout<<"password is correct"<<endl;

    // cout<<"hello world"<<endl;
    int result = 5/2;
    cout<<result<<endl;
    float x = 5.0;
    int res = x/2;
    cout<<(3 == 5) << (3 == 3)<<endl;

  



    return 0;
}