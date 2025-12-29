#include<iostream>
using namespace std ;
int main(){
    int x ;
    int product = 1;
    cout<<" enter the size of an array :";
    cin>>x;
    int arr[x];
    for (int i =0 ; i< x; i++){
        cin>>arr[i];
        product= product *arr[i];

    }
    cout<<product;
}