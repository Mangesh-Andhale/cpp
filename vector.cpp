// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // int main(){
// // // // //     vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

// // // // //     cout << "Size of vector: " << vec.size() << endl;

// // // // //     for (char val : vec) {
// // // // //         cout << val << " "<< endl;
// // // // //     }

// // // // //     return 0;

// // // // // }

// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // int main(){
// // // // //     vector<char> vec ;

// // // // //     cout << "Size of vector: " << vec.size() << endl;
// // // // //     vec .push_back('5');
// // // // //     vec .push_back('6');

// // // // //     cout << "after pushback size of vector: " << vec.size() << endl;


// // // // //     for (char val : vec) {
// // // // //         cout << val << " "<< endl;
// // // // //     }

// // // // //     return 0;

// // // // // }
// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // int main(){
// // // // //     vector<char> vec ;

// // // // //     cout << "Size of vector: " << vec.size() << endl;
// // // // //     vec .push_back('5');
// // // // //     vec .push_back('6');
// // // // //     vec .push_back('8');

// // // // //     cout << "after pushback size of vector: " << vec.size() << endl;

// // // // //     vec.pop_back();

// // // // //     cout << vec.front() << endl;

// // // // //     return 0;

// // // // // }

// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // int main(){
// // // // //     vector<char> vec ;

// // // // //     cout << "Size of vector: " << vec.size() << endl;
// // // // //     vec .push_back('5');
// // // // //     vec .push_back('6');
// // // // //     vec .push_back('8');

// // // // //     cout << "after pushback size of vector: " << vec.size() << endl;

// // // // //     vec.pop_back();

// // // // //     cout << vec.front() << endl;
// // // // //     cout << vec.back() << endl;
// // // // //     return 0;

// // // // // }

// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // int main(){
// // // // //     vector<char> vec ;

// // // // //     cout << "Size of vector: " << vec.size() << endl;
// // // // //     vec .push_back('5');
// // // // //     vec .push_back('6');
// // // // //     vec .push_back('8');

// // // // //     cout << "after pushback size of vector: " << vec.size() << endl;

// // // // //     vec.pop_back();

// // // // //     cout << vec.at(0) << endl;
// // // // //     cout << vec.at(1) << endl;
// // // // //     return 0;

// // // // // }


// // // // // maximun sub aaray 


// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // int main(){

// // // // //     int n = 5;
// // // // //     int arr[5] = {1, 2, 3, 4, 5};

// // // // //     for (int st=0 ; st<n; st++){
// // // // //         for (int end = st ; end < n ; end ++){
// // // // //             for (int i = st ; i <= end ; i++){
// // // // //                 cout << arr[i] << " ";
// // // // //             }
            
// // // // //         }
// // // // //         cout << endl;
// // // // //     }
// // // // // }


// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // int main(){

// // // // //     int n = 5;
// // // // //     int arr[5] = {1, 2, 3, 4, 5};

// // // // //     int maxsum = INT_MIN;


// // // // //     for (int st=0 ; st<n; st++){
// // // // //         int currSum = 0;
// // // // //         for (int end = st ; end < n ; end ++){
// // // // //            currSum += arr[end];
// // // // //            maxsum = max(currSum , maxsum );
// // // // //         }
      
// // // // //     }
// // // // //     cout <<"max sum of subarray is " << maxsum << endl;
// // // // // }


// // // // // kadanes algorithm


// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // int main(){

// // // // //     int n = 5;
// // // // //     int arr[5] = {1, 2, 3, 4, 5};

// // // // //     int maxsum = INT_MIN;


// // // // //     for (int st=0 ; st<n; st++){
// // // // //         int currSum = 0;
// // // // //         for (int end = st ; end < n ; end ++){
// // // // //            currSum += arr[end];
// // // // //            maxsum = max(currSum , maxsum );
// // // // //         }
      
// // // // //     }
// // // // //     cout <<"max sum of subarray is " << maxsum << endl;
// // // // // }


// // // // #include <iostream>
// // // // using namespace std;

// // // // binarysearch(int arr, int n , int target){
// // // //     int st = 0 ;
// // // //     int end = n-1 ;
// // // //     int mid = st - (end - st)/2 ;

// // // //     if (target >arr[mid]  ){ 
// // // //         st= mid +1;

// // // //     }
    
// // // //     else if(target <arr[mid]  ){ 
// // // //         end= mid -1;
// // // //     }
// // // //     else(target =arr[mid]) {
// // // //         return mid ;
// // // //     }
// // // //     return -1;


// // // // }
// // // // int main (){
// // // // int arr [] = {1,3,5,7,8,9,11,12,15}
// // // // int n = 9 ;
// // // // int target = 12 ;

// // // // cout << "" << binarysearch( arr , n , target) << endl;
// // // // return 0 ;

// // // // }

// #include <iostream>
// using namespace std;
// int main () {
//     int n ;
//     int sum = 0 ;
//     cout << "enter no" ;
//     cin >> n ;
//     for (int i = 1 ; i <= n ; i++){
//         sum += i ;
//     }
//     cout << "sum of first " << n << " natural numbers is " << sum ;
    
//     cout<<endl;
//     return 0 ;
// 