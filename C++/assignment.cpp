#include <iostream>
#include<vector>
#include<math.h>
#include <limits.h>
#include<algorithm>
using namespace std;
void search(vector<vector<int>>vec,key){

}
int main(){
    vector<vector<int>>vec = {
                      {3,4,5},
                      {6,7,8},
                      {0,1,2}
                      };
   // diagonal(vec);
    return 0;
}
//void diagonal(vector<vector<int>>vec){
// int sum = 0;
// for(int i=0; i<vec.size(); i++){
//   sum += vec[i][i];
//   if(i!= vec.size()-1-i){
//     sum += vec[i][vec.size()-1-i];
//   }
// }
// cout<<"sum of diagonal "<<sum;
// }
//void spiral(vector<vector<int>>vec){
//   int startrow = 0;
//   int startcol = 0;
//   int endrow = vec.size()-1;
//   int endcol = vec[0].size()-1;
//   while(startrow<=endrow && startcol<=endcol)
//   {
//     for(int j=startcol; j<=endcol; j++){
//        cout<<vec[startrow][j]<<" ";
//     }
//     for(int i=startrow+1; i<=endrow; i++){
//            cout<<vec[i][endcol]<<" ";
//     }
//     if(startrow<endrow){
//     for(int j=endcol-1; j>=startcol; j--){
//             cout<<vec[endrow][j]<<" ";
//     }
//     }
//     if(startcol<endcol){
//     for(int i=endrow-1; i>=startrow+1; i--){
//          cout<<vec[i][startcol]<<" ";
//     }}
//     startrow++;
//     startcol++;
//     endrow--;
//     endcol--;
//   }
// }

// bool twice(vector<int>vec){
//     int n = vec.size();
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n;j++){
//           if(vec[i]==vec[j]){
//             return true;
//           }
//         }
//     }
// }