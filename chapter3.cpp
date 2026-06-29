// #include <iostream>
// using namespace std ;

// int main (){
//     int num ;
//     cout << " enter a number: " ;
//     cin >> num ;

//     if (num % 2 == 0){
//         cout << num << " is even " << endl ;
//     }
//     else {
//         cout << num << " is odd " << endl ;
//     }

//     return 0 ;
// }

// #include <iostream>
// using namespace std ;

// int main (){
//     int marks ;
//     cout << " enter your marks: " ;
//     cin >> marks ;

//     if (marks >= 90){
//         cout << " Grade A " << endl ;
//     }
//     else if (marks >= 75){
//         cout << " Grade B " << endl ;
//     }
//     else if (marks >= 60){
//         cout << " Grade C " << endl ;
//     }
//     else if (marks >= 40){
//         cout << " Grade D " << endl ;
//     }
//     else {
//         cout << " Grade F " << endl ;
//     }

//     return 0 ;
// }



// #include <iostream>
// using namespace std ; 

// int main (){
//     char ch ;
//     cout << "enter char :" ;
//     cin >> ch;

//     if(ch>= 65 && ch <= 90){
//         cout << "uppercase\n";
//     } else {
//         cout << "lowercase\n";
//     }

//     return 0;

// }

// #include <iostream>
// using namespace std ;

// int main (){
//     int n = -45;

//     cout << ( n>= 0 ? "positive " : "negative") <<endl;

//     return 0;
// }


// #include <iostream>
// using namespace std ;

// int main (){
//     int count =1 ;
//     int n = 50;
//     while (count <=n)
//     {
//     cout << count <<" ";
//     count++;
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std ;

// int main (){

//     int n = 10;
    
//     for(int i = 1; i <= n;i++){

//         cout << i << " ";
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std ;

// int main (){

//     int n = 0;
//     int sum =0;
    
//     for(int i = 1; i <= n;i++){
        
//         sum +=i;
//     }
//             cout << " sum = " << sum << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std ;

// int main (){

//     int n = 0;
//     int sum =0;
//     int i = 1;
    
//     while(i <= n){
        
//         sum +=i;
//         i++;
//     }
//             cout << " sum = " << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std ;

// int main (){

//     int n = 50;
//     int sum =0;
    
//     for(int i = 1; i <= n;i++){
        
//         sum +=i;
//         if (i == 15){
//             break;
//         }
//     }
//             cout << " sum = " << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std ;

// int main (){

//     int age;
//     cout << " enter your age: " ;
//     cin >> age;
//     if (age <=18 ){    
//         cout << "you are not eligibile "  ;
//     } else{
//         cout << "you are eligibile "  ;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std ;

// int main (){

//     int  n ;
//     int  m ;
//     cout << "enter number 1 : " ;
//     cin >> n ;
//     cout << "enter number 2 : " ;
//     cin >> m ;
//     if (n > m){
//         cout << "larger no is :" << n << endl ;
//     }
//     else {
//         cout << "larger no is :" << m << endl ;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std ;

// int main (){
// int a ;
// cout << " enter a number: " ;
// cin >> a ;
// if (a >= 0){
//     cout << a << " is positive " << endl ;
// }
// else {
//     cout << a << " is negative " << endl ;
// }

//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main (){
//     int year ;
//     cout << " enter a year: " ;
//     cin >> year;
//     if (year % 4 == 0){
//         cout << "leap year" << endl;
//     }
//     else {
//         cout << "not a leap year" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main (){
//     int n = 50;
//     for (int i = 1; i <= 10; i++){
//         cout << i << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
