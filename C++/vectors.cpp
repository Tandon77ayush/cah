#include<iostream>
#include<vector>
using namespace std;
// int search(vector<int>vec , int target){
//     for(int i = 0; i< vec.size() ; i++){
//        if (vec[i]==target){
//         return i;
//         break;
//        }
//         }
//         return -1;
//     }
    // void reverse (vector<int>&vec){
    //     int n = vec.size();
    //     int start = 0;
    //     int end = n-1;
    //     while(start<end){
    //     swap(vec[start],vec[end]);
    //     start++;
    //     end--;
    //     }
    //}
//     void unique(vector<int> vec){
//     int num = 0;
//     for(int i = 0; i<vec.size(); i++){                                            //UNIQUE NUMBER
//        num = num^vec[i];                                                             
//     }
//     cout<<"Unique number is : "<<num;
//     }

int main(){
//     vector<int> vec = {1,2,3,3,2,4,1};
//     for(int val : vec){
//         cout<<val<<"  ";
//     }
//     cout<<endl;
//     int target;
//     cout<<"Enter the number to search: ";
//     cin>>target;
//     int idx = search(vec,target);
//     if(idx>=0){
//    cout<<"Element found at index: "<<idx<<endl;                                     //LINEAR SEARCH
//     }
//     else{
//     cout<<"Element not found"<<endl;
//     }
//     }
//    reverse(vec);
//  for(int val : vec){
//     cout<<val<<"  ";
//  }
// unique(vec);
//  int rows, cols;
    
//     // Input for number of rows and columns
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     cout << "Enter number of columns: ";
//     cin >> cols;

//     // Loop through each row
//     for(int i = 0; i < rows; i++) {
//         // Loop through each column
//         for(int j = 0; j < cols; j++) {
//             // Print '*' for the borders and spaces for the hollow part
//             if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {                  //HOLLOW PYRAMID
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl; // Move to the next line after each row
//     }
int n;
cout<<"Enter the value of n :";
cin>>n;

// for(int i =1 ; i<=n ; i++){
//     for(int j =1; j<=n-i ; j++){
//         cout<<" ";}
//         for(int k= 1; k<=i ; k++){                                              
//         cout<<"*";
//         }
//     cout<<endl;
// } 

////////////////////////////////////    REVERSE PYRAMID   /////////////////////////////////////////////////
// for(int i =1 ;i<=n ; i++)
// {
//     for(int j = 1; j<=n-i+1; j++){                                             
//         cout<<j;
//     }
//     cout<<endl;
// }

//////////////////////////////////////  FLOYD'S TRIANGLR  //////////////////////////////////////////////////
// int count = 1;
// for(int i =1; i<=n; i++ ){
//     for(int j = 1; j<=i; j++){                                                         
//         cout<<count++;
//     }
//     cout<<endl;}

/////////////////////////////////////  0-1 TRIANGLE  //////////////////////////////////////////////////////
// for(int i=1; i<=n ; i++){
//     for(int j=1; j<=i; j++){
//         if((i+j) % 2 == 0){
//             cout<<"1";  }                                                
//         else{
//             cout<<"0"; } }
//     cout<<endl;
// }
//////////////////////////////////  BUTTERFLY PATTERN  ///////////////////////////////////////////////////
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         for(int j=1; j<=2*(n-i); j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }
//        cout<<endl;
//     }
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n-i+1; j++){
//         cout<<"*";
//     }
//     for(int k=2 ; k<2*i; k++){
//           cout<<"1";
//     }
//     for(int l=1 ; l<=n-i+1; l++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

///////////////////////////////////  SOLID ROHMBUS PATTERN //////////////////////////////////////////////////
// for(int i=1; i<=n ; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//         }
//     for(int k =1 ; k<=n; k++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

/////////////////////////////////   HOLLOW ROHBUS PATTERN ////////////////////////////////////////////
// for(int i=1; i<=n ; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
// for(int k=1; k<=n ; k++){
//     if(i==1||i==n || k==1 || k==n){
//     cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
// }
//  cout<<endl;
// }

/////////////////////////////////   DIAMOND PATTERN    //////////////////////////////////////////////////////
// for(int i=1; i<=n ; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int k=1; k<=i; k++){
//         cout<<"*";
//     }
//     for(int l=1; l<i; l++){
//         cout<<"*";
//  }
//     cout<<endl;
// }
// int a= n-1;
// for(int i=1 ; i<=a; i++){
//       for(int j=1; j<=i; j++){
//         cout<<" ";
//       }
//      for(int k=1; k<=a-i+1; k++){
//       cout<<"*";
//      }
//      for(int l=1; l<a-i+1; l++ ){
//         cout<<"*";
//      }
//      cout<<endl;
// }

/////////////////////////////////////////  NUMBER PYRAMID PATTERN /////////////////////////////////////////
// for(int i=1; i<=n ; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int k= 1; k<=i; k++){
//         cout<<i<<" ";
//         }
// cout<<endl;
// }

///////////////////////////////// PALINDROMIC PATTERN  //////////////////////////////////////////////////////
    // for(int i=1; i<=n; i++){
    //     int count = i;
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(int k=1 ; k<=i; k++){
    //         cout<<count--<<" ";
    //     }
    //     for(int l=2; l<=i; l++){
    //        cout<<l<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
    }
