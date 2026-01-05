#include<iostream>
using namespace std ;
int mx =INT16_MIN;
int subarray ( int arr[] , int n){
    for ( int st = 0 ; st <n; st++){
        int currsum = 0 ;
        for ( int end = st ; end <n ; end ++ ) {
            currsum += arr[end];
            mx= max(mx, currsum);
        }
    }
    cout<<"the maximum sum is "<<mx<<endl;

}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/4;
    subarray (arr,n);
}