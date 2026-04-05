
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Marvellous Daniel-Umoh
 * ID:201963494
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 30000.0f;
   float NI_rate = 9.0f;
   float tax_rate = 25.0f;

   float NI;
   float Tax;
   float Take;
   float Take_home;
    // calculate the deductions and final take-home salary
   NI = salary * (NI_rate/100.0f);
   Take = salary - NI;
   if (Take > 12500.0){
      float t_income = Take - 12500.0f;
      Tax = t_income * (tax_rate/100.0f);
      Take = Take - Tax;
   }
   else{
      Tax = 0.0f;
   }
   Take_home = salary - NI - Tax;
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI);
    printf("Tax contribution £%.2f\n",Tax);
    printf("Take home salary £%.2f\n",Take_home);

    return 0;
 }