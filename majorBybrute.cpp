#include<iostream>
#include<vector>
using namespace std ;
int major(int arr[] , int n){
    for ( int i =0 ;  i<n; i ++){
        int count =1;
        for(int j=i+1 ; j<n ; j++){
            if ( arr[i]== arr[j]){
                count+=1;
            }

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