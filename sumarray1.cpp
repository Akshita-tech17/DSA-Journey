#include<iostream>
using namespace std ;
int main(){
    int x ;
    int sum =0 ;
    cout<<" enter the size of an array :";
    cin>>x;
    int arr[x];
    for (int i =0 ; i< x; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<< " the sum of an array is :"<<sum;
}