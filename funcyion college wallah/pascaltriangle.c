#include<stdio.h>
int factorial(int y){
    int fact =1;
    for(int i=2;i<=y; i++){
    fact =fact*i;
    }
    return fact;
}
int combination(int n, int b){
    int ncr = factorial(n)/(factorial(b)*factorial(n-b));
}
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
       
        
        for(int j=0; j<=i;j++){
            int icj = combination(i,j);

            printf("%d ",icj);
        }printf("\n");
        }

return 0;
    }

     
    



