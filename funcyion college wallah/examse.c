#include <stdio.h>

struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct person p1;

    printf("Enter name: ");
    scanf("%s", p1.name);

    printf("Enter age: ");
    scanf("%d", &p1.age);

    printf("Enter height: ");
    scanf("%f", &p1.height);

    printf("\nName: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    return 0;
}
