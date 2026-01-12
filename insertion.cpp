#include<iostream>
using namespace std;
void insertion( int arr[] , int n) {
    for ( int i = 1 ;i<n;i++){//n-1  iterations
        int curr = arr[i];
        int prev=i-1;
        while( prev >=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr; 
    }
}
void print ( int arr[] , int n){
    for ( int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
}
//main code 

int main(){
    int arr[] = { 4,1,5,2,3};
    insertion( arr, 5 );
    print(arr , 5);
}
// o(n^2)= time complexity
