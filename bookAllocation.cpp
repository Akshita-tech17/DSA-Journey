#include<iostream>
#include<vector>
using namespace std ;
bool isvalid(vector<int>&num,int n, int m, int mid ) {
    int student =1 ,pages=0;
    for ( int i =0 ; i<n; i++){
        if (( pages+num[i]<=mid)){
            pages+=num[i];
        }
        else{
            student++;
            pages=num[i];
        }
}
if (student>m){
    return false;
}
else{
    return true ;
}
}
int book( vector<int>&num,int n, int m){
    int sum =0 ;
    for ( int  i = 0 ; i<n ; i++ ){
        sum+= num[i];
    }
    int st =0 ;
    int end= sum;
    int ans=-1;
    while(st<=end){
        int mid = st+ (end-st)/2;
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
        vector<int>arr={2,1,3,4};
        int n = arr.size();
        int m =2;
        cout<<"the minimum possible max pages are"<<book(arr,n,m);
    }