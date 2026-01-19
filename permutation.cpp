#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
void perm(vector<int>&vec){
    int n = vec.size();
    int piv =-1;
    for ( int i = n-2 ; i>=0 ; i--){
        if ( vec[i]<vec[i+1]){
            piv=i;
            break;

        }
    }

    if(piv==-1){
        reverse(vec.begin(),vec.end());
    }
    for(int i = n-1 ; i>piv;i--){
        if ( vec[i]>vec[piv]){
            swap(vec[i],vec[piv]);
            break;
            }
        }
    int i = piv+1;
    int j = n-1;
    while(i<j){
        swap(vec[i], vec[j]);
        i++;
        j--;
    }
}
void printarr(vector<int>vec){
    int n = vec.size();
    for ( int i = 0 ; i<n; i++){
        cout<<vec[i];
    }
} 

int main(){
    vector<int>vec={1,3,4,6,5};
    perm(vec);
    printarr(vec);
}