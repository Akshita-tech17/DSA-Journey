#include<iostream>
using namespace std ; 
void bubble ( int arr[] , int n){
    bool Swap = false;
    for( int i =0 ; i<n-1; i++){
        for ( int j = 0 ; j<n-i-1; j++){
            if ( arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1] );
                Swap=true;
                
            }

        }
        if(Swap==false){
            return;
        }

    }
}
void printarr(int arr[] , int n ){
    for (int i = 0 ; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] ={4,5,1,2,3}; 
    bubble(arr,5);
    cout<<"the sorted array is : ";
    printarr(arr,5);
}