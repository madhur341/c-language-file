#include<stdio.h>

int main(){
    int i = 9;
    int *ptr =  &i;
    int **pptr = &ptr;
    printf("**pptr is :%d\n",**pptr);
    return 0;


    
}