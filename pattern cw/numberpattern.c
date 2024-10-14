#include<stdio.h>
int main(){
    int n;
    printf("enter rows number : ");
    scanf("%d",&n);

     int m;
    printf("enter column : ");
    scanf("%d",&m);

    for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
        printf("%d ",j);
    }
    printf("\n");
    }
}