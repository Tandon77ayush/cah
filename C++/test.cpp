#include<iostream>
#include<vector>
using namespace std;
// void bubble(vector<int>&vec,int n){
//     for (int i = 0; i<n-1; i++)
//     {
//         for(int j=0; j<n-i-1; j++){
//             if(vec[j]>vec[j+1]){
//                 swap(vec[j],vec[j+1]);
//             }
//         }
//     }
    
// }
void selection(vector<int>&vec,int n){
    for(int i=0; i<n; i++)
    {        int small = i;
         for(int j=i+1; j<n; j++){
      if(vec[small]>vec[j]){
            small = j;
           }
         }
         swap(vec[i],vec[small]);
    }
    }
int main(){
 vector<int> vec = { 5,6,1,3,2,8,0};
 int n = vec.size();
 selection(vec,n);
 for(int i=0; i<n; i++){
    cout<<vec[i]<<" ";

 }

}

