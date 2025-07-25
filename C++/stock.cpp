#include <iostream>
#include<vector>
#include<math.h>
#include <limits.h>
#include<algorithm>
using namespace std;
int stock(vector<int>vec){
    int n = vec.size();
    int buyprice = INT_MAX;
    int maxprofit = 0;
    for(int i=0; i<n; i++){
        if(buyprice < vec[i]){
           int profit = vec[i]-buyprice;
           maxprofit = max(maxprofit,profit);
        }
        else{
            buyprice = vec[i];
        }
    }
    return maxprofit;
}
int main(){
vector<int>vec = {7,1,5,3,6,4};
int maxprofit = stock(vec);
cout<<maxprofit;
}