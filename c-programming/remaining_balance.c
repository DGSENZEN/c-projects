#include <stdio.h>



int main(int argc, char *argv[])
{
  float loan, interest_rate, monthly, balance;
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly);

  interest_rate = (interest_rate / 12.0f) / 100.0f;
  balance = loan - monthly + (loan * interest_rate);
  printf("Balance remaining after first payment: $%2.f\n", balance);
  balance = balance - monthly + (balance * interest_rate);
  printf("Balance remaining after second payment: $%2.f\n", balance);
  balance = balance - monthly + (balance * interest_rate);
  printf("Balance remaining after third payment: $%2.f\n", balance);


  return 0;
}
