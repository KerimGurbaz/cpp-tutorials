#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){

    // char greeting[6] = {'H','e', 'l', 'l', 'o','\n'};
    // cout<<"message : " <<greeting<<endl;

    // char str1[20]="Kerim";
    // char str2[10]="GURBAZ";
    // char str3[20];

    // int mylength;

    // strcpy(str3, str1);
    // cout<<"strcpy(str3, str1) :" <<str3<<endl;

    // strcat(str1,str2);

    //  cout<<"strcpy(str1, str2) :" <<str1<<endl;

    //  mylength = strlen(str1);
    //   cout<<"strlen(str1)" <<mylength<<endl;

    string myText = "life is hard isn't it";
    string name = "Kerim, ";
    string str3 ;
    str3 = name.append(myText);
    cout<<str3.append(3, '.')<<endl;
 

    return 0;
}