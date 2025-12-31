#include<iostream>
using namespace std ;
int sum(int arr[] ,int n ){
    int mx = INT16_MIN;
    int  currsum=0;
    for (int i = 0; i <n; i++){
        currsum+=arr[i];
        mx = max(currsum, mx);
        if (currsum<0){
            currsum=0;
        }
    }
    return mx;
}
int main(){
    int arr[]= {3,-4,5,4,-1,7,-8};
    int n= sizeof(arr)/4;
    cout<<" the  maximum sum of subarray is "<<sum(arr,n);
}