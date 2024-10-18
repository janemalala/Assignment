//Program to calculate the total electricity bill using 3D array 
/*
Author:Jenny
Date: 6/10/2024
*/
#include <stdio.h>
#include <string.h>

//Defining constants
#define CUSTOMERS 2
#define FIELDS 3
#define UNITS 4

int main () {
//Declare 3D array: CUSTOMERS x FIELDS x UNITS
float customerData [CUSTOMERS] [FIELDS] [UNITS] ; // 3 customers, 4 fields: ID, Name(converted to a float placeholder), Units 

//Array to store customer names
char customerName [CUSTOMERS][10] ;

//Loop so that each customer inputs their details 
for(int i =0; i< CUSTOMERS; i++) {
printf("\nEnter Customer %d ID: ", i+ 1);
scanf("%f", & customerData [i] [0] [0]); //Customer ID stored as a float

printf("Enter Customer %d Name:", i + 1);
scanf("%s", customerName[i]);//Customer Name stored separately

printf("Enter Units Consumed %d: ", i + 1);
scanf("%f", & customerData[i][1][0]);// Units Consumed stored

//Calculate charges based on number of units consumed 
float units =customerData [i][1][0];
float chargesPerUnit ;
float TotalBill, surcharge =0.0;

//Finding charges per unit 
if(units <200) {
chargesPerUnit =1.20;
}else if(units >=200 && units<400) {
chargesPerUnit =1.50;
}else if(units >=400 && units<600) {
chargesPerUnit =1.80;
}else{
chargesPerUnit =2.00;
}

//Calculate total bill 
TotalBill= units * chargesPerUnit ;

//Apply surcharge to the bill is it is more than 400
if(TotalBill >400) {
surcharge =0.15 * TotalBill;
TotalBill += surcharge;
}

//The minimum bill should be 100
if(TotalBill <100) {
TotalBill =100;
}

//Store charges and total bill 
customerData [i] [2] [0] =chargesPerUnit ;
customerData [i] [2] [1] =TotalBill;
customerData [i] [2] [2]=surcharge ;
}
//Print customers data
printf("\nElectricity Bill :\n");
for(int i =0; i<CUSTOMERS; i++) {
printf("\nCustomer %d\n", i+1);
printf("Customer ID: %.0f\n", customerData[i] [0] [0]);
printf("Customer Name: %s\n", customerName[i]);
printf("Units Consumed: %.2f\n",customerData[i] [1] [0]);
printf("Charges Per Unit: Kshs %.2f\n", customerData[i] [2] [0]);
printf("Surcharge: Kshs %.2f\n", customerData[i] [2] [2]);
printf("Total Amount Paid: Kshs %.2f\n", customerData[i] [2] [1]);
}
return 0 ;
}