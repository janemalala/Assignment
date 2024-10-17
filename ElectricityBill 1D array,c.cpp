//Program to calculate total electricity bill of 1D arrays

#include <stdio.h>
int main () {
	int customerID, unitsConsumed;
	char customerName[5];
	float chargesPerUnit, totalBill, surcharge=0;
	float rates[4]={120, 1.50, 1.80, 2.00}; //Charges on the units basing on the number of units consumed
	
	//Prompt the user to enter their details
	printf("Enter Customer ID:");
	scanf("%d", &customerID);
	printf("Enter customer Name:");
	scanf("%s", &customerName);
	printf("Enter Units Consumed:");
	scanf("%d", &unitsConsumed);
	
	//Calculating charges per unit
	if(unitsConsumed<200) {
		chargesPerUnit=rate[0];
	} else if(unitsConsumed>=200 &&unitsConsumed<400) {
		chargesPerUnit=rate[1];
	}else if(unitsConsumed<=400 &&unitsConsumed<600) {
		chargesPerUnit=rate[2];
	}else{
		chargesPerUnit=rate[3];
	}
	
	//Calculate the total bill before applying the surcharge
	totalBill= unitsConsumed*chargesPerUnit;
	
	//Apply surcharges if the total bill exceeds 400
	if(totalBill >400) {
		surcharge=totalBill*0.15 // 15% surcharge
		totalBill +=surcharge;
	}
	
	//Ensuring that the minimum bill is 100
	if(totalBill <100) {
		totalBill=100;
	}
	
	//Disply Output
	printf("\n---Electricity Bill---\n");
	printf("Customer ID: %d\n",customerID);
	printf("Customer Name: %s\n",customerName);
	printf("Units Consumed: %d\n",unitsConsumed);
	printf("Charges Per Unit: %.2f\n",chargesPerUnit);
	printf("Total Bill: %.2f\n",totalBill);
	
	retun 0;
}