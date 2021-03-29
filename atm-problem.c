#include <stdio.h>

/* Create an ATM program that will simulate deposit, withdrawal and display
   balance. Assume that the starting balance is 10,000. */

void displayBal(int nBalance) {
  printf("Your Current Balance: %d.\n", nBalance);
}

void deposit(int* nBalance) { /* Will let the user add money to his/her current
                                 balance. */
  int nAmt;                   /* Value that will be added to the balance */

  printf("Enter Deposit Amount: ");
  scanf("%d", &nAmt);

  printf("You have deposited: %d.\n", nAmt);
  *nBalance += nAmt;
  displayBal(*nBalance);
}

void withdrawal(int* nBalance) {
  int nAmt; /* Value that will be added to the balance */

  printf("Enter Withdrawal Amount: ");
  scanf("%d", &nAmt);

  printf("You have withdrew: %d.\n", nAmt);
  *nBalance -= nAmt;
  displayBal(*nBalance);
}

int main() {
  int nBalance = 10000;

  displayBal(nBalance);

  deposit(&nBalance);

  withdrawal(&nBalance);

  return 0;
}
