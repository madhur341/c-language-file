#include<stdio.h>
int main(){
    char str[10]="college";
    str[2]=97;
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }

}