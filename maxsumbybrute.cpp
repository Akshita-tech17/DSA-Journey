#include<iostream>
using namespace std ;
int sum(int arr[] ,int n ){
    int mx = INT16_MIN;
    for (int st = 0; st <n; st++){
        int currsum =0;
        for ( int end = st ; end <n ; end ++){
             currsum+= arr[end];
             mx = max( currsum, mx);

        }
    }
    return mx;
}
int main(){
    int arr[]= {3,-4,5,4,-1,7,-8};
    int n= sizeof(arr)/4;
    cout<<" the  maximum sum of subarray is "<< sum(arr,n)<<endl;
}