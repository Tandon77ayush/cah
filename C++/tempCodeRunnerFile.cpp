#include <iostream>
#include<vector>
#include<math.h>
#include <limits.h>
#include<algorithm>
using namespace std;

void spiral(vector<vector<int>>vec){
  int startrow = 0;
  int startcol = 0;
  int endrow = vec.size()-1;
  int endcol = vec[0].size()-1;
  while(startrow<=endrow && startcol<=endcol)
  {
    for(int j=startcol; j<=endcol; j++){
       cout<<vec[startcol][j]<<" ";
    }
    for(int i=startrow+1; i<=endrow; i++){
           cout<<vec[i][endcol]<<" ";
    }
    for(int j=endcol-1; j>=startcol; j--){
      if(startrow==endrow)break;
            cout<<vec[endrow][j]<<" ";
    }
    for(int i=endrow-1; i>=startrow+1; i++){
         if(startcol==endcol)break;
         cout<<vec[i][startcol]<<" ";
    }
    startrow++;
    startcol++;
    endrow--;
    endcol--;
  }
}

int main(){
    vector<vector<int>>vec = {
                      {3,4,5},
                      {6,7,8},
                      {0,1,2}
                      };
    spiral(vec);
    return 0;
}