#include<iostream>
using namespace std ;
int main(){
    int x ;
    int mx =0 ;
    cout<<" enter the size of an array :";
    cin>>x;
    int arr[x];
    for (int i =0 ; i< x; i++){
        cin>>arr[i];
        // if (arr[i] > max ){
        //     max= arr[i];
        // }
        mx= max(mx, arr[i]);


    }
    cout<<"maximum element is :"<<mx;
}