// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter your array size :");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0; i<=n-1; i++){
//         printf("enter element %d :" ,i);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<=n-1; i++){
//         printf("%d\t",arr[i]);
//     }
//     }




//ye upar aur niche walasamee hain input leke print karana
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter array size :");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0; i<=n-1; i++){
//         printf("enter elements %d",i);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<=n-1; i++){
//         printf("%d\t",arr[i]);
// }

// }







//ye sum kiye hain input le ke
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter array sizr :");
//     scanf("%d", &n);
//     int sum = 0;
//     int arr[n];

//     for (int i = 0; i <= n - 1; i++)
//     {
//         printf("enter elements no  %d:", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i <= n - 1; i++)
//     {
//         sum = sum + arr[i];
//         //printf("%d\t", sum);
//     }
//     printf("%d",sum);
// }








//multiply user se input leke
#include <stdio.h>
int main()
{
    int n;
    printf("enter array sizr :");
    scanf("%d", &n);
    int mul = 1;
    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        printf("enter elements no  %d:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        mul= mul * arr[i];
        //printf("%d\t", sum);
    }
    printf("%d",mul);
}