#include <iostream>
#include <string>
using namespace std;

//     int sum(int, int);
//     double sum(double, double);

// int main(){

//     int x = sum(7,5);
//     double y = sum(7.21, 6.18);

//     cout<<"int : "<<x<<"\n";
//     cout<<"Double : "<<y<<"\n";

//     return 0;
// }

// int sum(int x, int y){
//     return x+y;
// }

// double sum(double x, double y){
//     return x+y;
// }


float exp (float x , float y);

int main(){

    float base, result=0;
    int exponent;
    cout<<" Enter base and exponent values : ";
    cin>>base >>exponent;
    result =exp(base, exponent);
    cout<<"result : "<<result<<endl;
    return 0 ;
}

float exp(float x, float y){
    float result = 1;
    int i;

    if(x==0){
        result =0;
    }else{
        if(y==0){
            result =1;
        }else if(y<0){
            for(i=0; i<-y; i++){
                result *=1/x;
        }
            }else{
                for(i=0; i<y; i++){
                    result *=x;
                }

            }

    }

return result;
}