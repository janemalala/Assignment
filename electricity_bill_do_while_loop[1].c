//program to calculate the total electricity bill using do while loop 
/*
Author: Jenny;
Date:7th October 2024;
*/
#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitsConsumed, chargesPerUnit, totalBill, surcharge;
    int continueInput; 

    do {
        // Input customer details
        printf("\n--- Electricity Bill Calculation ---\n");
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

        // Calculate total bill before applying any surcharges
        totalBill = unitsConsumed * chargesPerUnit;

        // Apply surcharge if the bill exceeds Ksh. 400
        if (totalBill > 400) {
            surcharge = totalBill * 0.15; // 15% surcharge
            totalBill += surcharge;
        }

        // Ensure the minimum total electricity bill is Ksh. 100
        if (totalBill < 100) {
            totalBill = 100;
        }

        // Display output 
        printf("\n--- Electricity Bill ---\n");
        printf("Customer ID: %d\n", customerID);
        printf("Customer Name: %s\n", customerName);
        printf("Units Consumed: %.2f\n", unitsConsumed);
        printf("Charges per Unit: %.2f\n", chargesPerUnit);
        printf("Total Amount Paid: %.2f\n", totalBill);

        // Check if the user wishes to continue
        printf("\nDo you want to enter details for another customer? (1 for Yes, 0 for No): ");
        scanf("%d", &continueInput);
    } while (continueInput == 1); // Loop continues if user enters 1

    return 0;
}