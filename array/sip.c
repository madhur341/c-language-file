// #include<stdio.h>
// int main(){
//     int num[5]={44,55,66,77,88,};

//     printf("number is :%d\n",num[2]);

// }



#include<stdio.h>
int main(){
    int marks[3];
    printf("enter phy :");
    scanf("%d",&marks[0]);
    printf("enter chem:");
    scanf("%d",&marks[1]);
    printf("enter mat:");
    scanf("%d",&marks[2]);

    printf("phy = %d, chem = %d, mat = %d",marks[0],marks[1],marks[2]);
}