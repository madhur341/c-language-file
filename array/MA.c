// #include<stdio.h>
// int main(){
//     int marks[2][3];
//     marks[0][0]=98;
//     marks[0][1]=56;
//     marks[0][2]=89;

//     marks[1][0]=78;
//     marks[1][1]=33;
//     marks[1][2]=73;

//     printf("%d",marks[0][2]);
//     return 0;
// }


//write a function to count the number of odd numbers in an array
#include<stdio.h>

int countOdd(int arr[],int n);

int main(){
    int  arr[] = {1,2,3,4,5,6};
    printf("%d", countOdd(arr, 6));


return 0;
}


int countOdd(int arr[], int n){
    int count =0;
    for (int i=0; i<n; i++){
        if(arr[i]% 2 !=0){
            count++;
        }
    }
}


