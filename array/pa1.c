//ye integer wla pointer arithmrtic wala hai
// #include<stdio.h>
// int main(){
//     int age = 27;
//     int *ptr= &age;
    
//  printf("ptr = %u\n",ptr);
//     ptr--;

//     printf("ptr = %u\n",ptr);
//      ptr++;
//      printf("ptr = %u\n",ptr);

//     return 0;
//     }


//float wala kar rhe hain
// #include<stdio.h>
// int main(){
//     float age = 27;
//     float *ptr= &age;
    
//  printf("ptr = %u\n",ptr);
//     ptr--;

//     printf("ptr = %u\n",ptr);
//      ptr++;
//      printf("ptr = %u\n",ptr);

//     return 0;
//     }



    //character wala
    #include<stdio.h>
    int main(){
        char mail ='@';
        char *ptr = &mail;

        printf("ptr =%u\n",ptr);
        ptr++;
         printf("ptr = %u\n",ptr);
         ptr--;
          printf("ptr = %u\n",ptr);
          return 0;
    }


