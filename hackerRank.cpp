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


int main(){

    int a, b, c, d;
    cin>>a >>b >>c>>d;

    if(a>=b & a >=c  & a>=d){
        cout<<a<< endl;
    }
    if(b>=a & b>=c  & b>=d){
        cout<<b<< endl;
    }
    if(c>=a & c>=b  & c>=d){
        cout<<c<< endl;
    }
    else
    cout<<d<<endl;


    return 0;
}