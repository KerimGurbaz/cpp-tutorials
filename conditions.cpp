#include <iostream>
using namespace std;

// int main(){
//     int x, y;
//     x = 19;
//     y = 29;
//     if(x>y){
//         cout<<x<< " variable is greater than "<<y <<" varaiable"; 
//     }
//     else{
//         cout<<x<< " variable is smaller than "<<y <<" varaiable"; 

//     }
//     return 0;
// }
// int main(){

//     int number1, number2;
//     cout<<"Enter a number\n";
//     cin>>number1;
//     cout<<"Enter another number\n";
//     cin>>number2;

//     if(number1 <number2){
//         cout<<number1 *number2;
//     }else if(number1 == number2){
//         cout<< number1 / number2;
//     }
//     else{
//         cout<<number1 +number2;

//     }

//     return 0;
// }

// int main(){

//     int number;
    
//     cout<< "Enter a number\n";

//     cin>> number;

//     if(number > 0){
//         cout<<"your number is positive\n";

//     }else if(number == 0){
//         cout << "your number is zero" <<endl;

//     }
//     else{
//         cout<<"your number is negative\n";
//     }


//     return 0;
// }


// int main(){
//     int number;
//     string result;
//     cout<<"Enter a number";
//     cin>>number;
//     result = (number>0)? "your number is positive":" your number is negative";

//     cout<<result<<"\n";
//     return 0;
// }

int main(){
    int score;
    cout<<"Enter a score";
    cin>>score;
    if((score >=50 && score <100)|| score <=10){
        cout<<"You passed the exam. Well done\n";
        cout<<"Your score is " <<score<<"\n";
    }else if(score >=50 && score ==100){
        cout<<"Your are amazing\n";
    }
    
    else{
        cout<<"You didn't pass the exam\n";
    }

    return 0;
}