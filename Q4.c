#include <stdio.h>

int main(){
    float accuracy;
    float latency;
    int m_approved;

    printf("Enter model accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter Prediction latency: ");
    scanf("%f", latency);

    printf("Enter approval status: ");
    scanf("%d", m_approved);

    printf("\n--- Deployment Status---\n");
    if (accuracy >= 90.0 && latency <= 100.0 && m_approved == 1){
        printf("Model can be deployed successfully.\n");
    }
    else {
        if (accuracy < 90.0){
            printf("Acuuracy too low\n");
        }
        if (latency > 100.0){
            printf("latency too high\n");
        }
        if (m_approved != 1){
            printf("model not approved");
        }
    }
    return 0;
}