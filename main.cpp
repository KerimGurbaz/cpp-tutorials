#include <iostream>
using namespace std;
int main() {
  int myIntNum = 7;
  float myFloatNum =7.9e5;
  double myDoubleNum = 7.1E3;
  bool myBooNumber = true;
  char MyCharacter = 'k';
  char x =42, y = 102, z=70;
  string my_text ="C++ will get easer overtime";

/*

  cout<< "char : " <<sizeof(char)<<"\n";
  cout<<"int : "<<sizeof(int)<<endl;
  cout<<"short int : "<<sizeof(short int)<<"\n";
  cout << "long int : " <<sizeof(long int) << endl;
  cout <<"float : " << sizeof(float) << endl;
  cout <<"double : " << sizeof(double)<< endl;
  cout <<"wchar_t : " <<sizeof(wchar_t)<<"\n" ;
*/

cout <<"int = "<< myIntNum<<"\n";
cout << "float = "<< myFloatNum<<endl;
cout << "double = " << myDoubleNum << "\n";
cout<<x<<y<<z<<endl;
cout<<&my_text<< endl; // & isareti variable'in rem'deki adresini gostermesi acisindan kullaniyoruz.

   return 0;
};