//program to calculate the total electricity bill using for loop function 
#include <stdio.h>

int main() {
    int numberOfCustomers, customerID;
    char customerName[50];
    float unitsConsumed, chargesPerUnit, totalBill, surcharge;

    // Prompt user for the number of customers
    printf("Enter Number of Customers: ");
    scanf("%d", &numberOfCustomers);

    // Loop through the 5 customers 
    for (int i = 0; i <6; i++) {
        // Enter the customer's details
        printf("\n--- Customer %d ---\n", i + 1);
        printf("Enter Customer ID: ");
        scanf("%d", &customerID);
        printf("Enter Customer Name: ");
        scanf("%s", customerName);
        printf("Enter Units Consumed: ");
        scanf("%f", &unitsConsumed);

        // Calculate charges per unit based on units consumed
        if (unitsConsumed < 200) {
            chargesPerUnit = 1.20;
        } else if (unitsConsumed < 400) {
            chargesPerUnit = 1.50;
        } else if (unitsConsumed < 600) {
            chargesPerUnit = 1.80;
        } else {
            chargesPerUnit = 2.00;
        }

        // Calculate total bill before any surcharges
        totalBill = unitsConsumed * chargesPerUnit;

        // Apply surcharge if the bill exceeds Ksh. 400
        if (totalBill > 400) {
            surcharge = totalBill * 0.15; // 15% surcharge
            totalBill += surcharge;
        }

        // Ensure the minimum bill is Ksh. 100
        if (totalBill < 100) {
            totalBill = 100;
        }

        // Output 
        printf("\n--- Electricity Bill ---\n");
        printf("Customer ID: %d\n", customerID);
        printf("Customer Name: %s\n", customerName);
        printf("Units Consumed: %.2f\n", unitsConsumed);
        printf("Charges per Unit: %.2f\n", chargesPerUnit);
        printf("Total Amount Paid: %.2f\n", totalBill);
    }

    return 0;
}