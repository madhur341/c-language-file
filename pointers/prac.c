#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    
  //adress printing
    //printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%u\n",ptr);

    printf("%p\n",&ptr);
    printf("%u",&ptr);
    return 0;
}





// #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
    
  //value printing
    //printf("%p\n",&age);
//     printf("%d\n",age);
//     printf("%d\n",*ptr);

//     printf("%d\n",*(&age));
    
//     return 0;
// }




//question 31

// #include<stdio.h>
// int main(){
//     int *ptr;
//     int x;
//     ptr = &x;
//     *ptr = 0;

//     printf("x= %d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     //output is 0
//     //code mein changes hua hai isliye


//     *ptr =+ 10;
//     printf(" x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     //output is 5


// (*ptr)++;
// printf(" x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     //output is 11
//     return 0;
// }