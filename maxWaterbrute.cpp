#include<iostream>
#include<vector>
using namespace std ;
int  maxwater( vector<int> &length ){
    int maxwater = INT16_MIN;
    for ( int i =  0 ; i<length.size(); i++){
        for ( int j = i+1; j<length.size(); j++){
            int ht =  min ( length[i], length[j]);
            int width = j -i ;
            int area = ht * width ;
            maxwater = max ( maxwater , area );

    }
    return maxwater;
    }

}
int main(){
    vector<int> length = {1,8,6,2,5,4,8,3,7};
    cout<<" the maximum water that can be stored is "<< maxwater(length)<<endl;

}
