#include<stdio.h>
#include<limits.h>
int main(){
    
    int arr[8]={44,55,66,22,88,77,99,78};
    int max= INT_MIN;
    int smax=INT_MIN;
    for(int i=0; i<=7; i++){
        if(max<arr[i]){
            max =  arr[i];
        }
    } 


     for(int i=0; i<=7; i++){
        if(arr[i]!=max && smax<arr[i] ){
            smax =  arr[i];
        }
    } printf("%d\t%d",max,smax);
}