//Program to calculate total electricity bill using 2D array 
#include <stdio.h>
int main () {

int n, i, unitsConsumed ;
int customerID [10]; 
char customerName [5] [30];
float totalBill [5], chargesPerUnit, surcharge =0;
float rate[4]= {1.20, 1.50, 1.80, 2.00};

//Instruct the user to input their details 
printf("Enter number of customers: ");
scanf("%d", &n);

//Loop to take the user to other customers 
for(i = 0; i < n; i++) {
printf("\nEnter customer's details %d:\n", i +1);

//Input the user name and ID
printf("Enter Customer ID: ");
scanf("%d", &customerID[i]);
printf("Enter Customer Name: ");
scanf("%s", &customerName[i]);
printf("Enter Units Consumed: ");
scanf("%d", &unitsConsumed);

//Calculate charges per unit based on number of units consumed 
if(unitsConsumed <200) {
chargesPerUnit =rate[0];
}else if(unitsConsumed >=200 && unitsConsumed <400) {
chargesPerUnit =rate[1];
}else if(unitsConsumed >=400 && unitsConsumed<600) {
chargesPerUnit =rate[2];
}else { 
chargesPerUnit =rate[3];
}

//Calculate total bill 
totalBill[i]= unitsConsumed * chargesPerUnit ;

//Apply surcharge if the total bill exceeds 400
if(totalBill[i] >400) {
surcharge = totalBill[i] * 0.15; //15% surcharge added
totalBill [i] += surcharge ;
}

//Ensure minimum bill is 100 
if(totalBill[i] <100) {
totalBill [i]= 100;
}
}

//Output 
printf("\n---Electricity Bill---\n");
for(i=0; i<n; i++) {
printf("\nCustomer %d:\n", i+1);
printf("Customer ID: %d\n", customerID[i]);
printf("Customer Name: %s\n", customerName[i]);
printf("Total Bill to Pay: %.2f Ksh \n", totalBill[i]);
}

return 0 ;
}
