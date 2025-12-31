#include<iostream>
#include<vector>
using namespace std ;
//dsa
int reverse(vector<int> &vec){
    int result =0;
    int i=0 ; 
    int j = vec.size()-1;
    while(i<j){
        int temp= vec[i];
        vec[i]=vec[j];
        vec[j]=temp;
        i++;
        j--;
    }
    for (int val: vec){
        cout<<val<<" ";
    }
    return 0;
}
int main(){
    vector<int>vec={1,2,3,5,4,5,6,3,2,6,1,};
    reverse(vec);
}
