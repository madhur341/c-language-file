// #include<stdio.h>
// int main(){
//     int max=-1;
//     int arr[8]={44,55,66,22,88,77,99,78};
//     for(int i=0; i<8; i++){
//         if(max<arr[i]){
//             max =  arr[i];
//         }
//     } printf("%d",max);
// }






//sabse kam value dhundhna hai
#include<stdio.h>
#include<limits.h>
int main(){
    int min=INT_MAX;
    int n;
    printf("enter your array size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++ ){
        printf("enter your elements  %d :",i);
        scanf("%d",&arr[i]);

        if(min>arr[i]){
            min = arr[i];
        }
    }printf("%d",min);
}