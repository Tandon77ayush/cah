#include <iostream>
#include<vector>
#include<math.h>
#include <limits.h>
#include<algorithm>
using namespace std;
// void bubble(vector<int>&vec){
//     int n = vec.size();
//     for(int i=0; i<n-1; i++){
//          for(int j=0; j<n-i-1; j++)
//          {
//         if(vec[j]>vec[j+1]){
//             swap(vec[j],vec[j+1]);
//         }
//          }
//     }
// }
// }
// void Selection(vector<int>&vec){
//     int n = vec.size();
//     for(int i=0; i<n; i++){
//         int small = i;
//         for(int j=i+1; j<n; j++){
//             if(vec[j]<vec[small]){
//                 small = j;
//             }
//         }
//         swap(vec[i],vec[small]);
//     }
// }
// void insertion(vector<int>&vec){
//     for(int i=1; i<vec.size(); i++){
//         int curr = vec[i];
//         int prev = i-1;
//         while(prev >= 0 && vec[prev]>curr){
//               vec[prev+1] = vec[prev];
//               prev--;
//         }
//         vec[prev+1] = curr;
//     }
// }
 int  num(vector<int>&vec){
      int currsum = 0;
      int maxsum = INT_MAX;
      int n = vec.size();
      for(int i=0; i<n; i++){
        currsum += vec[i];
        maxsum = max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
      }
      return maxsum;
}
int main(){
 vector<int> vec = {4,1,5,3,2};
 ///insertion(vec);
// cout<<"Sorted array is :"<<endl;
// for(int  i=0; i<vec.size(); i++){
//     cout<<vec[i]<<" ";
// }
int max = num(vec);
cout<<max;
}