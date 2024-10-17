 #include <stdio.h>

int main() {
    int customerID;
    char customerName[20];
    float unitsConsumed, chargesPerUnit, totalBill, surcharge;

    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    // Determine the charges per unit based on the units consumed
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

    // Apply surcharge if bill exceeds Ksh.400
    if (totalBill > 400) {
        surcharge = totalBill * 0.15; // 15% surcharge
        totalBill += surcharge;
    }

    // Ensure minimum bill is Ksh.100
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Display the results
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", chargesPerUnit);
    printf("Total Amount Paid: %.2f\n", totalBill);

    return 0;
}
