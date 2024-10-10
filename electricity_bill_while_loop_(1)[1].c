//program to calculate total electricity bill using do while loop function 
#include <stdio.h>
int main () {
int customerID;
char customerName;
float unitsConsumed, chargesPerUnit, totalBill, surcharge;

int continueInput;

do {
//Input the customer's details 
printf("\n---Electricity Bill Calculation---\n");
printf("Enter Customer ID:");
scanf("%d", &customerID);
printf("Enter customer Name:");
scanf("%s", & customerName);
printf("Enter Units Consumed:");
scanf("%f", &unitsConsumed);

//Calculate charges per unit based on units consumed 
if(unitsConsumed<200) {
chargesPerUnit =1.20;
} else if(unitsConsumed<400) {
chargesPerUnit =1.50;
} else if(unitsConsumed<600) {
chargesPerUnit =1.80;
} else {
chargesPerUnit =2.00;
}

//Determine total bill before applying surcharge 
totalBill =unitsConsumed * chargesPerUnit;

//Applying surcharge to the total bill if it exceeds 400
if(totalBill>400) {
surcharge = totalBill * 0.15; //15% surcharge 
totalBill += surcharge;
}

//Ensure the minimum bill is 100
if(totalBill<100) {
totalBill =100;
}

//Output
printf("\n---Electricity Bill---\n");
printf("Customer ID: %d\n", customerID);
printf("Customer Name: %s\n", customerName);
printf("Charges Per Unit: %.2f\n", chargesPerUnit);
printf("Total Amount Paid: %.2f\n", totalBill);

//Check if the user wishes to continue 
printf("\nDo you wish to enter details for another customer? (1 for Yes, 2 for No):");
scanf("continueInput");
} while ("continueInput == 1"); // Loop continues if the user enters 1

return 0 ;
}
