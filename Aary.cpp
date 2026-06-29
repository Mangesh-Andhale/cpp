// #include <iostream>
// using namespace std;

// int marks [5] = {45, 67, 89, 90, 78};

// double price [] = {45.5, 67.8, 89.6, 90.1, 78.5};

// return 0 ; 

// #include <iostream>
// using namespace std;

// int main() {
// int marks [5] = {45, 67, 89, 90, 78};

// cout << marks [0] << endl;
// cout << marks [1] << endl;
// cout << marks [2] << endl; 
// cout << marks [3] << endl;
// cout << marks [4] << endl;

// return 0 ; 
// }

// #include <iostream>
// using namespace std;    
// int main() {
// int size = 5;
// int marks[size]; 

// for ( int i = 0 ; i < size ; i++ ) {
//     cin >> marks [i] ;
// }
// for ( int i = 0 ; i < size ; i++ ) {
//     cout << marks [i] << endl;
// }


// return 0 ; 
// }

// pratice of array in c++


#include <iostream>
using namespace std;

int main() {
    int nums[] =  {15, 5 , 21, 8 , 32};
    int size = 6;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;

    
    for (int i = 0; i < size; i++) {
       smallest = min(nums[i], smallest );
       largest = max(nums[i], largest );
    }

    cout << "The smallest number is: " << smallest << endl;
    cout << "The largest number is: " << largest << endl;
    return 0;
}