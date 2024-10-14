#include<stdio.h>
int main(){
   int arr[7]={1,2,3,4,3,2,1};
   int brr[7];
   for(int i=0;  i<=6; i++){
    brr[i]=arr[6-i];
   }
   for(int i=0;  i<=6; i++){
    printf("%d ",brr[i]);
   }

}