#include<iostream>
#include<algorithm>
using namespace std ;
bool possible( int arr[] , int n , int mid ,int c  ){
    int cow =1 ;
    int laststalpos=arr[0];
    for ( int i = 1; i< n ; i++){
       // sort(arr.begin(), arr.end()); is for vectors 
        if ( arr[i]  - laststalpos >= mid ){
            cow ++;
            laststalpos=arr[i];
        }
        if ( cow == c){
            return true ;// mid value is possible for being the min distance
        }

    }
    return false ; // when mid value is not possible for being the min distance
} 
int cow ( int arr[] , int n ,int c) {
    sort(arr, arr + n); 
    int st =1;
     int ans= -1;
    int end = arr[n-1]- arr[0];
    while(st<=end){
        int mid = st+ ( end-st)/2;
        if(possible( arr , n , mid,c)){//min distance valid h for 3 cows
            ans=mid ;
            st =mid+1;//kyuki largest minimum chiye 
        }
        else{
            end=mid-1;
        }
    
}
return ans ;
}
int main(){
    int arr[] = { 1,2,8,4,9};
    int  c = 3;
    cout<< " the largest minimum distance is : "<< cow(arr,5 ,c);
}