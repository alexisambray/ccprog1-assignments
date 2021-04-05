#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Create an ATM program that will simulate deposit, withdrawal and display
   balance. Assume that the starting balance is 10,000. */

void displayBal(int nBalance) {
  printf("Your Current Balance: %d.\n", nBalance);
}

int checkNegaInput(int nAmt) {
  if (nAmt < 0)
    return TRUE;

  return FALSE;
}

void deposit(int* nBalance) { /* Will let the user add money to his/her current
                                 balance. */
  int nAmt;                   /* Value that will be added to the balance */

  printf("Enter Deposit Amount: ");
  scanf("%d", &nAmt);

  if (checkNegaInput(nAmt))
    printf("Cannot accept amount!\n");
  else
    *nBalance += nAmt;
}

void withdrawal(int* nBalance) {
  int nAmt; /* Value that will be added to the balance */

  printf("Enter Withdrawal Amount: ");
  scanf("%d", &nAmt);

  if (nAmt <= *nBalance && !checkNegaInput(nAmt))
    *nBalance -= nAmt;
  else
    printf("Not a valid amount!\n");
  // Alternative:
  // if(nAmt > *nBalance)
  //  printf("Insufficient Balance of not valid!");
  // else if(nAmt > 0)
  //   *nBalance -= nAmt;
  // else
  //   printf(:Not a valid amount!\n);
}

int main() {
  int nBalance = 10000, nChoice;

  displayBal(nBalance);
  printf("Please select a transaction: \n");
  printf("\t1 - Deposit\n");
  printf("\t2 - Withdrawal\n");
  printf("\t3 - View Balance\n");
  printf("\t4 - Exit\n");
  printf("Choice: ");
  scanf("%d", &nChoice);

  if (nChoice == 1) {
    deposit(&nBalance);
    displayBal(nBalance);
  } else if (nChoice == 2) {
    withdrawal(&nBalance);
    displayBal(nBalance);
  } else if (nChoice == 3)
    displayBal(nBalance);

  else
    printf(
        "You either chose exit or invalid choice! Thank you and have a nice "
        "day!");

  return 0;
}
