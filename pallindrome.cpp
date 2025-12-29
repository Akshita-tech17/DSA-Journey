#include<iostream>
using namespace std ;
int main (){
    bool flag =true;
    int arr []= {1,2,3,4,4,3,2,1};
    int n = sizeof (arr)/4;
    for (int i=0 , j=n-1; i<n/2; i++, j--){
        if (arr[i]!=arr[j]){
            flag=false;
            break;
    
        }
    }
    if (flag==false){
        cout<<" not pallindrome";
    }
    else{
        cout<<"pallindrome";
    }
}
    