#include<iostream>
#include<vector>
using namespace std ;
int pairs(int arr[] , int n,  int target){
    int i=0;
    int j= n-1;
    while(i<j){
        if (arr[i]+arr[j]< target){
            i++;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else  if (arr[i]+arr[j]==target){
            cout<<arr[i]<<" "<< arr[j]<<endl;
            i++;
            j--;
        }
    }
}
    
int main(){
    int arr[] ={2,3,4,5,6};
    int n= sizeof(arr)/4;
    int target = 5;
    cout<<" pairs are ";
    pairs(arr,n,target);
    
}