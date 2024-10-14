#include<stdio.h>
int main(){
    int arr[5] = {1,5,6,8,7};
    int sum =1;
    for(int i=0; i<=4; i++){
        sum = sum*arr[i];
    }
    printf("%d",sum);
}