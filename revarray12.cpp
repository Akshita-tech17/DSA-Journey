#include<iostream>
using namespace std ;
int main (){
    int arr []= {1,4,9,16,25};
    int n = sizeof (arr)/4;
    int revarr[n];
    for (int i =0 ; i<n; i++){
        revarr[i]=arr[n-i-1];
    }
    for (int i =0 ; i<n;i++){
        cout<<revarr[i]<<" ";
    }
}
