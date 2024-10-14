// yeh ek methid hai

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter rows kitna : ");
//     scanf("%d",&n);

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n+1-i ; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }


// }


//ye dusra method hai bas thora difference hai
#include<stdio.h>
int main(){
    int n;
    printf("enter rows kitna : ");
    scanf("%d",&n);
    int a=n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=a ; j++){
            printf("* ");
        }
        a--;
        printf("\n");
    }


}