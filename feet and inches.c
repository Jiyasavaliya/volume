#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance a, b, sum;

   
    printf("enter Feet: ");
    scanf("%d", &a.feet);
    printf("enter Inches: ");
    scanf("%d", &a.inches);


   
    printf("enter Feet: ");
    scanf("%d", &b.feet);
    printf("enter Inches: ");
    scanf("%d", &b.inches);


    sum.feet = a.feet + b.feet;
    sum.inches = a.inches + b.inches;

   if (sum.inches >= 12) {
        sum.feet += sum.inches / 12;
        sum.inches = sum.inches % 12;
    }

  printf("Sum of distances = %d feet %d inches", sum.feet, sum.inches);

    return 0;
}

