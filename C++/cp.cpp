#include <iostream>
#include<vector>
#include<math.h>
#include <limits.h>
#include<algorithm>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                ///////////////////// MAX SUBARRAY SUM ///////////////////////////////////////

///////////////////////////////  BRUTE FORCE APPROACH ///////////////////////////////////////
// int maxsub(vector<int>vec){
//     int n = vec.size();
//     int maxsum = INT_MIN ;
//     for(int start=0; start<n ; start++){
//         int currsum =0;                                
//         for(int end=start; end<n; end++){
//            currsum += vec[end];
//            maxsum = max(maxsum,currsum);
//     }
//    } return maxsum;
//    }

/////////////////////////////////////// KADANE'S ALGORITHM ////////////////////////////////////////////
// int maxsub(vector<int>vec){
//     int n =vec.size();
//     int maxsum = INT_MIN;
//     int currsum = 0;
//     for(int i=0; i<n; i++){
//         currsum += vec[i];
//         maxsum = max(maxsum,currsum);
//         if(currsum < 0) 
//         {currsum = 0;}
//     }
//     return maxsum;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// PAIR SUM //////////////////////////////////////////

//////////////////////////////// BRUTE FORCE APPROCH //////////////////////////////////////////////
// vector<int> pairsum(vector<int>vec,int target){
//     vector<int> ans;
//     int n = vec.size();
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//              if(vec[i]+vec[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//              }
//         }
//     }
//     return ans;
// }
      
/////////////////////////////////// BRUTE-BETTER-APPROACH ////////////////////////////////////////// 
vector<int> pairsum(vector<int>vec,int target){
 vector<int> ans;
 sort(vec.begin(),vec.end());
int n = vec.size();
int i = 0;
int j = n-1;
while(i<j){
   if(vec[i]+vec[j]<target){
    i++;
   }
   else if(vec[i]+vec[j]>target){
    j--;
   }
   else{
    ans.push_back(i);
    ans.push_back(j);
    return ans;
   }
   }
   
}
// return ans;
// }
int  main(){
   vector<int>vec ={2,6,3,4,5,7,8,9,};
   int target = 9;
   vector<int>ans=pairsum(vec,target);
   cout<<"pair index value is"<<endl;
   cout<< ans[0]<<" "<<ans[1]<<endl;
}
    
        
