#include <iostream>
#include <math.h>
using namespace std;
// void reverseNUm(int a){
//     int rev = 0;
//     while(a>0){
//         int digit = a%10;
//         rev = rev*10 +digit;
//         a = a/10;
//     }
//     cout<<"reverse of number is : "<<rev;

// }
int main(){
     int n;
    cout<<"Enter any number : ";
    cin>>n;
     for(int i=1 ; i<=n ; i++){
          for(int j = 1; j<=i  ; j++){
              cout<<"*";

          }
          for(int k=1;  k<=n-i ; k++){
               cout<<" ";
          }
          for(int l = 1; l<=n-i; l++) {
               cout<<" ";
          }
          for(int m = 1; m<=i; m++) {
               cout<<"*";
          }


          cout<<endl;
     }
     for(int i = n; i>=1; i--){
          for(int j=1; j<=i; j++){
         cout<<"*";
          }
          for(int j =0 ; j<n-i;  j++){
               cout<<" ";
          }
          for(int m = 0 ; m<n-i; m++){
               cout<<" ";
          }
          for(int k = 1;  k<=i; k++){
               cout<<"*";
               }


          cout<<endl;
     }

     return 0 ;
}
     



    

