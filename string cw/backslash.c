#include<stdio.h>
int main(){
    char arr[]={'a','b','c','d','g'};

    int i=0;
    while(arr[i]!='\0'){
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}