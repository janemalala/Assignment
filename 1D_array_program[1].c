//Program to calculate the total electricity bill using 1D array 
#include<stdio.h>
int main () {
int customerID, unitsConsumed ;
char customerName [10];
float chargesPerUnit, totalBill, surcharge=0;
float rate[4]={1.20, 1.50, 1.80, 2.00} ;//Charges Per Unit 

//Instruct the user to input their details 
printf("Enter Customer ID: ");
scanf("%d", & customerID);
printf("Enter Customer Name: ");
scanf("%s", & customerName);
printf("Enter Units Consumed: ");
scanf("%d", & unitsConsumed);

//Calculating the charges per unit based on units consumed 
if(unitsConsumed<=200) { 
chargesPerUnit =rate[0];
} else if(unitsConsumed >=200 && unitsConsumed <400) {
chargesPerUnit =rate[1];
}else if(unitsConsumed >=400 && unitsConsumed <600) {
chargesPerUnit =rate[2];
}else {
chargesPerUnit =rate[3];
}

//Calculate total bill 
totalBill =unitsConsumed * chargesPerUnit ;

//Apply surcharge of 15% is total bill exceeds 400
if(totalBill >400) {
surcharge =totalBill * 0.15; //15% surcharge to be added
totalBill += surcharge ;
}

//Ensure minimum bill is 100 
if(totalBill <100) {
totalBill =100;
}

//Output 
printf("\n---Electricity Bill---\n");
printf("Customer ID: %d\n", customerID);
printf("Customer Name: %s\n", customerName);
printf("Units Consumed: %d\n", unitsConsumed);
printf("Charges Per Unit: %.2f\n", chargesPerUnit);
printf("Total Bill: %.2f\n", totalBill);

return 0 ;
}