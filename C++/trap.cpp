#include <iostream>
#include<vector>
#include<math.h>
#include <limits.h>
#include<algorithm>
using namespace std;
 int trap(vector<int>vec){
    int n = vec.size();
    /////////////////////////////////
    vector<int> leftmax(n);
    leftmax[0] = vec[0];
    for(int i=1; i<n; i++){
        leftmax[i] = max(vec[i],leftmax[i-1]);
    }
    ////////////////////
    vector<int> rightmax(n);
    rightmax[n-1]= vec[n-1];
    for(int i=n-2; i>=0; i--){
        rightmax[i]= 
     max(vec[i],rightmax[i+1]);
    }
    ///////////////////////
    int trapwater = 0;
    for(int i=0; i<n; i++){
        int waterlevel = min(rightmax[i],leftmax[i]);
        trapwater += waterlevel - vec[i];
    }
    return trapwater;
 }
 int main(){
    vector <int> vec = {4,2,0,6,3,2,5};
    int trapwater = trap(vec);
    cout<<trapwater;
 }