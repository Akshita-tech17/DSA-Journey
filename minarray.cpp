#include<iostream>
using namespace std ;
int main(){
     int arr[]= { 0, 3, 45, 67, 1,  5, 65, 89 ,98, 90, 9 };
     int size= sizeof(arr)/ 4;
     int mn = INT_FAST64_MIN;
     for ( int i =0 ; i< size ; i++ ){
         mn = min ( mn, arr[i]);

     }
     cout<< mn;

}