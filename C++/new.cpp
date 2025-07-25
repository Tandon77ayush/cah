#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void max(vector<int> vec,int n){
// for(int val: vec){
//   int count = 0;
//   for(int el:vec){
//    if(vec[val]==vec[el]){
//              count++;}
//   }
//   if(count > n/2)
//   { cout<<vec[val];
//     break;}

// }}
// void max(vector<int>vec,int n){
//   sort(vec.begin(),vec.end());
//   int count = 1;  int ans = vec[0];
//   for(int i=1; i<n; i++){
//     if(vec[i]==vec[i-1]){
//       count++;
//     }
//   else{
//     count = 1;
//     ans = vec[i];
//   }
//   if(count>n/2){
//     cout<<"majority number is : "<<ans;
//     break;
//   }
// }}
//  int max(vector<int>vec,int n){
//      int count = 0 ;  int ans = 0;
//      for(int i=0; i<n; i++){
//           if(count == 0){
//             ans = vec[i];
//           }
//          if(ans == vec[i]){
//           count++;
//          }
//          else{
//           count--;
//          }
//          }
//          return ans;
// }
//  int calc(int x, int n){
//   int ans = 1;
//   int bin = n;
//   while(bin>0){
//      if(bin%2==1){
//       ans = ans*x;
//      }
//      x = x*x;
//      bin = bin/2;
//   }
//   return ans;
//
int num(vector<int>vec, int  target){
    int n = vec.size();
    int st = 0;
    int end = n-1;
    while(st <= end){
        int mid = (st+end)/2;
        if(target >vec[mid]){
           st = mid + 1;
        }
        else if(target<vec[mid]){
           end = mid-1;  
        }
        else
        {
            return mid;
        }
    }
    return - 1;
}
int main(){
    vector<int> vec ={-23,-22,0,12,45,78,90,111};
    // int n = vec.size();
    // int maj = max(vec,n);
    // cout<<maj;
    int target = 99;
    int status = num(vec,target);
    if(status>=0){
    cout<<"Element fount at index "<<status;}
    else{
        cout<<"Element not found";
    }
    return 0;
}

