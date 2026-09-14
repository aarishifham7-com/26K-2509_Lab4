#include <stdio.h>

int main() {
    int total_records, missing_records, duplicate_records;
    float missing_pct, duplicate_pct;

    printf("Enter total number of records: ");
    scanf("%d", &total_records);

    if (total_records <= 0) {
        printf("Invalid Dataset\n");
        return 0;
    }

    printf("Enter number of missing records: ");
    scanf("%d", &missing_records);

    printf("Enter number of duplicate records: ");
    scanf("%d", &duplicate_records);

    missing_pct = ((float)missing_records / total_records) * 100.0;
    duplicate_pct = ((float)duplicate_records / total_records) * 100.0;

  
    if (missing_pct > 30.0) {
        printf("\nPoor Quality Dataset\n");
    } 
    else if (duplicate_pct > 20.0) { 
        printf("\nDataset Requires Cleaning\n");
    } 
    else {
        printf("\nDataset Ready for Training\n");
    }

    return 0;
}
   