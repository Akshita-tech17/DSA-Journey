#include<iostream>
using namespace std ;
int main(){
    int x ;
    int sum =0 ;
    cout<<" enter the size of an array :";
    cin>>x;
    int arr[x];
    for (int i =1 ; i<=x ; i++){
        arr[i]=i;
    }
     for (int i =1 ; i<=x; i++){
        cout<<(arr[i]*arr[i])<<" ";
    }
}