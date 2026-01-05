#include<iostream>
#include<vector>
using namespace std ;
int pairs(int arr[] , int n,  int target){
    for ( int i =0 ;  i<n; i ++){
        for(int j=i ; j<n ; j++){
            if ( arr[i] + arr[j] == target ){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }

        }
    }
}
int main(){
    int arr[] ={1,2,3,5,4,5,6,3,2,6,1,};
    int n= sizeof(arr)/4;
    int target = 5;
    cout<<" pairs are ";
    pairs(arr,n,target);
    
}
