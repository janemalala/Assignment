//Program to calculate total electricity bill using functions 
#include<stdio.h>

//Variable declaration 
float calculateCharge (int units);
float applySurcharge (float totalAmount);
float ensureMinimumBill (float totalBill);
void printBill (int customerID, char customerName[5], int unitsConsumed, float chargesPerUnit, float totalAmount);

int main () {
int customerID, unitsConsumed ;
char customerName ;
float chargesPerUnit, totalAmount;

//Ask the user to input their details 
printf("Enter Customer ID:");
scanf("%d", & customerID);
printf("Enter Customer Name:");
scanf("%s", &customerName);
printf("Enter Units Consumed:");
scanf("%d", &unitsConsumed);

//Calculating  charges per unit 
chargesPerUnit =calculateCharge(unitsConsumed);

//Calculate the total amount 
chargesPerUnit=unitsConsumed*chargesPerUnit;

//Apply surcharge if the total amount is more than 400
totalAmount=applySurcharge(totalAmount);

//Ensure the minimum bill is 100 
totalAmount=applySurcharge(totalAmount);

//Printing the bill 
printBill(customerID, customerName, unitsConsumed, chargesPerUnit, totalAmount);

return 0;
}

//Function used to calculate charges per unit basing on the number of units consumed 
float calculateCharge(int units) {
if(units<200) {
return 1.20;
}else if(units>=200 &&units<400) {
return 1.50;
}else if(units>=400 && units<600) {
return 1.80;
}else {
return 2.00;
}
}

//Function used to apply surcharge for totalAmounts that exceeds 400
float applySurcharge(float totalAmount) {
if(totalAmount>400) {
totalAmount +=totalAmount*0.15; //15% surcharge added
}
return totalAmount;
}

//Function used to ensure that the minimum amount is 100
float ensureMinimumBill(float totalAmount) {
if(totalAmount<100) {
return 100;
}
return totalAmount;
}

//Output 
void printBill(int customerID, char customerName[5], int unitsConsumed, float chargesPerUnit, float totalAmount) {
printf("\nElectricity Bill:\n");
printf("Customer ID: %d\n", customerID);
printf("Customer Name: %s\n", customerName);
printf("Units Consumed: %d\n", unitsConsumed);
printf("Charges Per Unit: %.2f\n", chargesPerUnit);
printf("Total Amount: %.2f\n", totalAmount);
}
