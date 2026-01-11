#include<iostream>
#include<vector>
using namespace std ;
bool isvalid(vector<int>&num,int n, int m, int mid ) {
    int painter =1 ,board=0;
    for ( int i =0 ; i<n; i++){
        if (( board+num[i]<=mid)){
            board+=num[i];
        }
        else{
            painter++;
            board=num[i];
        }
}
if (painter>m){
    return false;
}
else{
    return true ;
}
}
int paint( vector<int>&num,int n, int m){
    if ( m>n){
        return -1;
    }
    int sum =0 ;
    for ( int  i = 0 ; i<n ; i++ ){
        sum+= num[i];
    }
    int st =num[0];
    int end= sum;
    int ans=-1;
    while(st<=end){
        int mid = st+ (end-st)/2;
        for( int i =0 ; i<n; i++){
            if (num[i]>mid){
                return -1;
            }
        }
        if (isvalid (num ,n,m ,mid)==true){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
        
    }
    return ans;
 }
    int main(){
        vector<int>arr={40,30,10,20};
        int n = arr.size();
        int m =2;
        cout<<"the minimum possible max pages are"<<paint(arr,n,m);
    }