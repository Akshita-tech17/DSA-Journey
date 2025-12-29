#include<iostream>
using namespace std ;
int main(){
    int x ;
    int mx;
    int count =0;
    cout<<" enter the size of an array :";
    cin>>x;
    int arr[x];
    for (int i =0 ; i< x; i++){
        cin>>arr[i];
    }
    cout<<"enter the max element to compare ";
    cin>>mx;
     for (int i =0 ; i< x; i++){
        if (arr[i] > mx ){
            count = count + 1;
        }
     }
    cout<<" the number of maximum elements is :"<<count ;
}