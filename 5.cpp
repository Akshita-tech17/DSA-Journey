#include<iostream>
using namespace std ;
int count(int *arr , int n   , int x ){
    int *ptr=arr;
    int count = 0 ;
    for ( int i = 0  ; i<n ; i++){

        if (*ptr==x){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    int arr[]  = {1,2,3,2,2,4};
    int n = sizeof (arr)/sizeof(arr[0]);
    int x = 3;
    cout<<" the count of "  << x << " is "<< count(arr , n ,x);

}
