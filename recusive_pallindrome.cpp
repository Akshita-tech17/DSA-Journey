#include<iostream>
using namespace std ;
bool ispall( int arr[] , int n  , int i){
    if (  i>=n/2){
        return true;
    }
    if(arr[i]!=arr[n-1-i]){
        return false;
    }
    return ispall(arr, n, i+1);
}

int main (){
    int arr []= {1,2,3,4,4,3,2,1};
    int n = sizeof (arr)/4; 
    int i =0 ;
    ispall(arr,n,i);
    }
    