#include<iostream>
using namespace std ;
 int power(int a , int n ){
    if (n==0) return 1;
    return a * power( a , n-1);

    
}
int main(){
    int n, a;
    cout<<" enter the power  :";
    cin>>n;
    cout<<" enter the number whose power is to raise "<<n<<":";
    cin>>a;
    cout<< power(a,n);

}