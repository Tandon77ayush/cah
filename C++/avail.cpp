#include<iostream>
#include<vector>
using namespace std;
// void bubble(vector<int>&vec, int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-2;j++){
//             if(vec[j]>vec[j+1]){
//                 swap(vec[j],vec[j+1]);
//             }
//         }
//         cout<<"After "<<i<<"th iteration"<<endl;
//         for(int i=0; i<n; i++){
//         cout<<vec[i]<<" ";
// }
//     }
// }
void insertion(vector<int>&vec, int n){
    for(int i=1; i<n; i++){
        int prev = i-1;
        int curr = vec[i];
        while(vec[prev]>vec[curr]&&)
    }
}
int main(){
vector<int>vec = {8,7,2,5,1,3,9};
int n= vec.size();
bubble(vec,n);
}
