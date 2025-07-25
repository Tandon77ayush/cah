#include<iostream>
#include<limits.h>
using namespace std;
void func(int arr[],int n){
    int sum = 0;
    int pr = 1;
    for(int i = 0; i<n ;  i++){
      sum +=  arr[i];
      pr *= arr[i];
}
cout<<"sum :"<<sum<<endl;
cout<<"product: "<<pr<<endl;
}
void swaparr(int arr[], int n, int max, int  min){
    int imax = -1;
    int imin= -1;
    for(int i = 0; i<n ; i++){
        if(arr[i]<min){
            min = arr[i];
            imin = i;
            }
    }
    for(int i = 0; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
            imax = i;
        }
    }
    swap(arr[imax],arr[imin]);
}
void unique(int arr[] , int n){
    int  num  = 0;
      for(int i = 0; i<n ; i++){
       num = num ^ arr[i];
      }
      cout<<num;  

        //   for(int j = 0; j<n ; j++){
        //       if ( i != j && arr[i]==arr[j]){
        //           flag = 1;
        //      break;
        //       }
        //   }
        //   if(flag == 0){
        //     cout<<arr[i]<<" ";
        //   }
    

}
void intersection(int arr1[], int arr2[], int n , int m){
      for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
             if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
             }
}
      }
}
int search(int arr[], int n , int target){
       for(int i = 0; i<n ; i++){
        if ( arr[i]==target){
              return i ;
            break;
        }
       }
       return -1;
}
void reversearr(int arr[] , int n){
       int start =  0;
       int end = n-1;
       while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
       }
}

int main()
{
    int arr[] = {2,5,5,2,6,4,4};
   // int arr2[] = {4,5,6,7,8,9};
    int n = sizeof(arr)/4;
    // cout<<n;
    // reversearr(arr, n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i];
    // }
    // // int target = 5;
    //  int idx = search(arr,n, target);
    //  if(idx>=0){
    //  cout<<"element found at index :"<<idx;
    //  }
    //  else{
    //     cout<<"element not found";
    //  }
    // int m = 6;
    // intersection(arr1,arr2,n,m);


    // int max = INT_MIN;
    // int min = INT_MAX;
    // func(arr, n);
    // swaparr(arr, n, max, min);
    // for(int i = 0; i<n ; i++){
    //     cout<<arr[i]<<" ";
    // }
    unique(arr,n);
return 0;    
}