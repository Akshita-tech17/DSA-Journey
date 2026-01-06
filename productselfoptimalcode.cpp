#include<iostream>
#include<vector>
//code
using namespace std ;
vector<int>product(vector<int>&vec){
    int n =vec.size();
    vector<int>ans(n,1);
    ans[0]=1;
    for ( int i = 1; i<n; i++){
        ans[i]=vec[i-1]*ans[i-1];
    }
    int suffix = 1; 
    for ( int i = n-2; i>=0; i--){
        suffix*=vec[i+1];
        ans[i]*=suffix;
        }
        
return ans ;
}
//
//main code
int main (){
    vector<int> vec = { 1,2,3,4};
    vector<int> result = product(vec);
    for(int i : result){
        cout<<i<<" ";
    }
}
//time complexity O(n)
//my