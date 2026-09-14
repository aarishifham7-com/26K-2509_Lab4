#include <stdio.h>

int main() {
    int obstacle, person, battery;

    printf("Enter Obstacle status (1 = Detected, 0 = Not Detected): ");
    scanf("%d", &obstacle);

    printf("Enter Person status (1 = Detected, 0 = Not Detected): ");
    scanf("%d", &person);

    printf("Enter Battery percentage (0-100): ");
    scanf("%d", &battery);

    if (obstacle == 1) {
        if (person == 1) {
            printf("Emergency Stop\n");
        } else {
            printf("Change Direction\n");
        }
    } else {
        if (battery < 20) {
            printf("Return to Charging Station\n");
        } else {
            printf("Continue Moving\n");
        }
    }

    return 0;
}