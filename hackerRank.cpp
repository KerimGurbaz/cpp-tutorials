// #include <iostream>

// using namespace std;

// int main() {
//    int a ,b;
//    cin >>a;
//    cin >>b;

//     for (int i = a; i <= b; i++) {
//         if (1 <= i && i <= 9) {
//             switch (i) {
//                 case 1:
//                     cout << "one" << endl;
//                     break;
//                 case 2:
//                     cout << "two" << endl;
//                     break;
//                 case 3:
//                     cout << "three" << endl;
//                     break;
//                 case 4:
//                     cout << "four" << endl;
//                     break;
//                 case 5:
//                     cout << "five" << endl;
//                     break;
//                 case 6:
//                     cout << "six" << endl;
//                     break;
//                 case 7:
//                     cout << "seven" << endl;
//                     break;
//                 case 8:
//                     cout << "eight" << endl;
//                     break;
//                 case 9:
//                     cout << "nine" << endl;
//                     break;
//                 default:
//                     break;
//             }
//         } else {
//             if (i % 2 == 0) {
//                 cout << "even" << endl;
//             } else {
//                 cout << "odd" << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <cmath>// for using abs function

using namespace std;

// Belirli bir sayının İngilizce karşılığını yazdıran fonksiyon
// void printNumberInWords(int num) {
//     switch (num) {
//         case 1: cout << "one" << endl; break;
//         case 2: cout << "two" << endl; break;
//         case 3: cout << "three" << endl; break;
//         case 4: cout << "four" << endl; break;
//         case 5: cout << "five" << endl; break;
//         case 6: cout << "six" << endl; break;
//         case 7: cout << "seven" << endl; break;
//         case 8: cout << "eight" << endl; break;
//         case 9: cout << "nine" << endl; break;
//         default: break;
//     }
// }

// // Sayının tek mi çift mi olduğunu yazdıran fonksiyon
// void printEvenOrOdd(int num) {
//     if (num % 2 == 0) {
//         cout << "even" << endl;
//     } else {
//         cout << "odd" << endl;
//     }
// }

// int main() {
//     int a, b;
//     cin >> a;
//     cin >> b;

//     for (int i = a; i <= b; i++) {
//         if (1 <= i && i <= 9) {
//             printNumberInWords(i);
//         } else {
//             printEvenOrOdd(i);
//         }
//     }

//     return 0;
// }

// find max. valeu
// int main(){

//     int a, b, c, d;
//     cin>>a >>b >>c>>d;

//     if(a>=b & a >=c  & a>=d){
//         cout<<a<< endl;
//     }
//     if(b>=a & b>=c  & b>=d){
//         cout<<b<< endl;
//     }
//     if(c>=a & c>=b  & c>=d){
//         cout<<c<< endl;
//     }
//     else
//     cout<<d<<endl;


//     return 0;
// }

// version-2

//  int max_of_four(int a, int b, int c, int d){

//     int max = 0;

//     int arr[4] = {a,b,c,d};

//     for(int i = 0; i<4 ;i++){
//         if(arr[i]> max){
//             max = arr[i];
//         }
//     }


//     return max ; 
//  }


// int main(){
//    int a,b,c,d;
//    cin>>a>>b>>c>>d;
//    int max = max_of_four(a,b,c,d);
//        int arr[4] = {a,b,c,d};

//    cout<< max<<endl;
//    cout<<arr[1]<<endl;

//    return 0;
// }

 
// pointer v-1

// int main(){

//     int a,b, result, sum_abs;

//     cin>>a>>b ;

//     result =a+b;

//     cout<< result << endl;

//     if(a<b){
//         sum_abs = b-a ;
//         cout<<sum_abs<<endl;
//     }
//     else {
//              sum_abs = a-b;
//             cout<<sum_abs<<endl;
//     }
    
  

//     return 0;
// }


// pointer v-2

void answer(int *a, int *b){
    int org_a = *a;
    

    *a  = *a + *b;

    *b = abs(org_a - *b);
}

int main(){
    int a,b;

    cin>>a>>b;

    answer(&a, &b);

    cout<<a<<endl;
    cout<<b<<endl;
}