#include<iostream>
using namespace std ;
int main (){
    int arr []= {1,4,9,16,25};
    int n = sizeof (arr)/4;
    for (int i =0 ; int j=n-1 ; i++ , j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i =0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
