#include<stdio.h>
int main(){
    float price[3];
    printf("ener 3 prices :");
    scanf("%f%f%f",&price[0],&price[1],&price[2]);
//dono upar aur neeche wale se kar skte hain

    //scanf("%f",&price[0]);
    //scanf("%f",&price[1]);
    //scanf("%f",&price[2]);

    printf("total price 1 :%f",price[0]+(0.18*price[0]));
    printf("total price 2 :%f",price[1]+(0.18*price[1]));
    printf("total price 3 :%f",price[2]+(0.18*price[2]));
    
    return 0;
}