
//ye ek method hua ulta type print karane ka
// #include<stdio.h>
int main(){
 int n;
 printf("enter the row no : ");
 scanf("%d",&n);
 //int a= n;

 for(int i=1; i<=n; i++){
    for(int j=1; j<=n+1-i; j++){
        printf("%d",j);
    }
    printf("\n");
 }
}





//dusra method ulta print karane ka

// #include<stdio.h>
// int main(){
//  int n;
//  printf("enter the row no : ");
//  scanf("%d",&n);
//  int a= n;

//  for(int i=1; i<=n; i++){
//     for(int j=1; j<=a; j++){
//         printf("%d",j);
//     }a--;
//     printf("\n");
//  }
// }