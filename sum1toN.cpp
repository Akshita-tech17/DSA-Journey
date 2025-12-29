#include<iostream>
using namespace std;
int printsum(int n){
    int sum;
    if (n==1) return 1 ;
    sum=printsum(n-1)+n;
    return sum;
    
}

int main(){
    cout<<"enter the number:";
    int n;
    cin>>n;
    cout<<"the sum is :"<<printsum(n);
    
}
