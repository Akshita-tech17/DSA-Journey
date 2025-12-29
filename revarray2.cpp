#include<iostream>
using namespace std ;
int main (){
    int arr []= {1,4,9,16,25};
    int n = sizeof (arr)/4;
    int revarr[n];
    for (int i =0 ; int j=n ; i++ , j--){
        revarr[i]=arr[j];
    }
    for (int i =0 ; i<n;i++){
        cout<<revarr[i]<<" ";
    }
}