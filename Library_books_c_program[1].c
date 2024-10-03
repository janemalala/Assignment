#include<stdio.h>
int main() {

//input book's details 
int bookID=12371;
int dueDate=20092024;
int returnDate=29092024;
int daysOverdue;

float fineRate=0.0, fineAmount=0.0;

//calculate days overdue 
daysOverdue=returnDate-dueDate;

//Determine fine rate using the if-else statement 
if(daysOverdue<=7) {
fineRate=20.0; //charge per day is Ksh.20.0 for up to 7 days 
} else if(daysOverdue<=14) {
fineRate=50.0; //charge per day is Ksh.50.0 for 8 to 14 days
} else {
fineRate=100.0; //charge per day is Ksh.100.0 for 15 days or more 
}

//Calculate fine amount 
fineAmount=daysOverdue*fineRate;

//Output 
printf("\nBook ID: %d", bookID);
printf("\nDue Date: %d", dueDate);
printf("\nRetur Date: %d", returnDate);
printf("\nDays Overdue: %d", daysOverdue);
printf("\nFine Rate: %2.f", fineRate);
printf("\nFine Amount: %2.f", fineAmount);

return 0;
}