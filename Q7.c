#include <stdio.h>

int main() {
    double data_used, price_per_gb;
    double basic_cost, discount_rate = 0.0, discount_amount, final_cost;

    printf("Enter data used in GB: ");
    scanf("%lf", &data_used);

    printf("Enter price per GB: ");
    scanf("%lf", &price_per_gb);

    basic_cost = data_used * price_per_gb;

    if (data_used < 50.0) {
        discount_rate = 0.00;
    } 
    else if (data_used <= 99.0) {
        discount_rate = 0.05;
    } 
    else if (data_used <= 199.0) {
        discount_rate = 0.10;
    } 
    else {
        discount_rate = 0.15;
    }

    discount_amount = basic_cost * discount_rate;
    final_cost = basic_cost - discount_amount;

    printf("\n--- Data Usage Bill Summary ---\n");
    printf("Basic Cost: $%.2f\n", basic_cost);
    printf("Discount Amount: $%.2f\n", discount_amount);
    printf("Final Cost: $%.2f\n", final_cost);

    return 0;
}
