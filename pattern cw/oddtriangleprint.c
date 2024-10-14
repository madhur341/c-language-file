// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no of rows : ");
//     scanf("%d",&n);

//     for(int i=1; i<=2*n-1; i=i+2){
//         printf("%d",i);
//     }
//     return 0;
// }


//this is one method
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no of rows: ");
//     scanf("%d",&n);
    

//     for(int i=1; i<=n; i++){
//         int a=1;
//         for(int j=1; j<=n; j++){
//             printf("%d",a);
//             a=a+2;
//         }
//         printf("\n");
//     }
//     return 0;
// }



//this is another method
#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows: ");
    scanf("%d",&n);
    

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=2*n-1; j=j+2){
            printf("%d",j);
            
        }
        printf("\n");
    }
    return 0;
}