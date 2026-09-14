#include <stdio.h>

int main(){
    int role, status, security_level;

    printf("Enter User Role (1 = Admin, 2 = Researcher, 3 = Student): ");
    scanf("%d", &role);

    printf("Enter Account Status (1 = Active, 0 = Inactive): ");
    scanf("%d", &status);

    printf("Enter Security Level: ");
    scanf("%d", &security_level);

    if (status == 0) {
        printf("Access Denied\n");
    } 
    else if (role == 1 && security_level >= 3) {
        printf("Admin Access Granted\n");
    } 
    else if (role == 2 && security_level >= 2) {
        printf("Researcher Access Granted\n");
    } 
    else if (role == 3 && security_level >= 1) {
        printf("Student Access Granted\n");
    } 
    else {
        printf("Access Denied\n");
    }

    return 0;
}