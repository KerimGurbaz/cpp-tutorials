#include <iostream>
#include <string>
using namespace std;

int main(){

    string txt;
    cout<< "Enter a string : ";
    getline(cin, txt);
    int myLength = txt.size();
    cout<<txt<<"\n";
    cout<<myLength<<"\n";
    txt.resize(myLength+26, 'k');
    cout<<txt<<endl;
    cout<<txt.length();

    

    return 0;
}