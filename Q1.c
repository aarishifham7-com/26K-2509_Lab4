#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("\n");

    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal (%.2f).\n", num1);
    }
    
    else if (num1 == num2 && num1 > num3) {
        printf("The first and second numbers are equal and greatest (%.2f).\n", num1);
    }
    else if (num1 == num3 && num1 > num2) {
        printf("The first and third numbers are equal and greatest (%.2f).\n", num1);
    }
    else if (num2 == num3 && num2 > num1) {
        printf("The second and third numbers are equal and greatest (%.2f).\n", num2);
    }

    else if (num1 > num2 && num1 > num3) {
        printf("The greatest number is %.2f (First number).\n", num1);
    }
    else if (num2 > num1 && num2 > num3) {
        printf("The greatest number is %.2f (Second number).\n", num2);
    }
    else {
        printf("The greatest number is %.2f (Third number).\n", num3);
    }

    return 0;
}