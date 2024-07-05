#include<iostream>
using namespace std;
int main(){

    /*
    
     int myNum_1, myNum_2, sum;
     
     cout<< "enter a numer : " << endl ;
     cin >> myNum_1;
     cout<< "Enter another number "<< endl;
     cin >> myNum_2;
     sum = myNum_1 + myNum_2;
     cout<< "Numbers you entered are: "<<myNum_1 <<" and "<<myNum_2 << " = " << sum << endl;

     alan = 2*PI*r**2
   const float PI = 3.1415;
   float r, area, circumference;
   cout << "Enter the radius of the circle : ";
   cin>> r;
   circumference = 2*PI*r;
   area = PI * r * r ;
   cout<<"\ncircumference of the circle is "<<circumference<<"\n";
   cout<<"area of the circle is "<< area <<endl;
    */
   
string myText;
// cout<<"Enter a message : "<<endl;
// getline(cin, myText);
// cout<<"Your message is \""<<myText<< "\""; 
char myText1[70];
cout<<"Enter a message: ";
cin.getline(myText1, sizeof(myText1));
cout<<"Your message is \""<<myText1<<"\""<< endl;


    return 0;
}