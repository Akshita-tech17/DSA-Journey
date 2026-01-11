#include<iostream>
using namespace std;
void bubble( int arr[] , int n) {
    for ( int i = 0 ;i< n-1;i++){
        for ( int j = 0 ; j<n-1-i; j++){
            if (arr[j] >arr[j+1]){
                swap( arr[j], arr[j+1]);
            }

        }
    }
}
void print ( int arr[] , int n ) {
    for ( int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";

    }
}
int main(){
    int arr[] = { 4,1,5,2,3};
    bubble( arr, 5 );
    print(arr , 5);
}
// o(n^2)= time complexity
