#include<iostream>
#include<vector>
using namespace std ;
int major(int arr[] , int n){
    int freq =0 , ans=0;
    for ( int i =0 ;  i<n; i ++){
        if ( freq ==0){
            ans= arr[i];
        }
        if ( arr[i]==ans){
            freq++;
        }
        else{
            freq--;
        }
        
        if (count >n/2){
          return arr[i];
        }
    }
return -1;
}
int main(){
    int arr[] ={1,5,3,5,5,5,6,4,2,5,5,};
    int n= sizeof(arr)/4;
    int maj = major(arr,n);
    cout<< major(arr,n) <<endl;
   
}