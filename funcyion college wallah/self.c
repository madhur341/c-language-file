#include<stdio.h>
int factorial(int y){
    int fact =1;
    for(int i=2;i<=y; i++){
    fact =fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);

     int b;
    printf("enter n :");
    scanf("%d",&b);

    int ncr = factorial(n)/(factorial(b)*factorial(n-b));
    printf("%d",ncr);

    return 0;

}