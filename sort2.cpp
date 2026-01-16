#include<iostream>
using namespace std ; 
void selection ( int arr[] , int n){
    for( int i =0 ; i<n-1; i++){
        int smallest_idx=i;
        for ( int j =i+1 ; j<n; j++){
            if ( arr[j]<arr[smallest_idx]){
                smallest_idx=j;
                
            }

        }
        swap(arr[i], arr[smallest_idx] );
        }

    }
void printarr(int arr[] , int n ){
    for (int i = 0 ; i<n; i++ ){
        cout<<arr[i]<<" ";
    }  
}

int main(){
    int arr[] ={4,1,5,2,3}; 
    selection(arr,5);
    cout<<"the sorted array is : ";
    printarr(arr,5);
}