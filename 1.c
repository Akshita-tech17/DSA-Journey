#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("myfile.txt","w");
for ( int i =0 ; i<1000 ; i++){
    for ( int j =0 ; j<5 ; j++){
        fscanf(fptr,"%d", rand()%10);

    }
//
}