// #include<stdio.h>
// int main(){
//     int arr[5];
//     printf("enter first number:");
//     scanf("%d",&arr[0]);

//     printf("enter second number:");
//     scanf("%d",&arr[1]);

//     printf("enter third number:");
//     scanf("%d",&arr[2]);

//     printf("enter fourth number:");
//     scanf("%d",&arr[3]);

//     printf("enter fifth number:");
//     scanf("%d",&arr[4]);

//     printf("%d\n%d\n%d\n%d\n%d",arr[0],arr[1],arr[2],arr[3],arr[4]);
//     return 0;
// }

// upar wala input lene ka tarika thida lamba hai

// ye tha short tarika se print karwane ka tarika
// #include<stdio.h>
// int main(){
//     int arr[5] =  {55,68,46,785,13};
//     for(int i=0; i<=4; i++){
//         printf("%d\t",arr[i]);
//     }

// }

// ab loop ko use kar ke input lenge
// #include <stdio.h>
// int main()
// {
//     int arr[5];
//     for (int i = 0; i <= 4; i++)
//     {
//         // printf("enter number:");

//         printf("\nenter number%d : ", i + 1);
//         scanf("%d", &arr[i]);
//     } // printf("%d",arr[0]);
//     // pura ek sath print karne ke liye
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }

// question, number ko reverse mein print karna hai
// #include <stdio.h>
// int main()
// {
//     int arr[5];

//     for (int i = 0; i <= 4; i++)
//     {
//         printf("\nenter number%d : ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 4; i >= 0; i--)
//     {

//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// question hai hme marks daalne hai aur 35 se km no aaye to roll no print karnna hai aur rol no idexing ke brabar hoga

#include <stdio.h>
int main()
{
    int marks[10];
    for (int i = 0; i <= 9; i++)
    {
        printf("\nenter number%d : ", i + 1);
        scanf("%d", &marks[i]);
    }
     for(int i=0; i<=9; i++){
        if(marks[i]<35){
            printf("%d\t",i);
        }
     }
    return 0;
}
