#include <stdbool.h>
#include <stdio.h>

typedef enum { DEPOSIT = 1, WITHDRAWAL, VIEW_BALANCE } TransactionType;

/* Create an ATM program that will simulate deposit, withdrawal and display
   balance. Assume that the starting balance is 10,000. */

void displayBal(double lfBalance) {
  printf("Your Current Balance: %.2lf.\n", lfBalance);
}

int checkValidAmount(double lfAmt) {
  return lfAmt >= 0;
}

bool deposit(double* lfBalance) { /* Will let the user add money to his/her
                                 current balance. */
  double lfAmt;                   /* Value that will be added to the balance */
  bool valid = false;

  printf("Enter Deposit Amount: ");
  scanf("%lf", &lfAmt);

  if (checkValidAmount(lfAmt)) {
    *lfBalance += lfAmt;
    valid = true;
  } else {
    puts("Cannot accept amount!");
  }
  return valid;
}

bool withdrawal(double* lfBalance) {
  double lfAmt; /* Value that will be added to the balance */
  bool valid = false;

  printf("Enter Withdrawal Amount: ");
  scanf("%lf", &lfAmt);

  if (lfAmt <= *lfBalance && checkValidAmount(lfAmt)) {
    *lfBalance -= lfAmt;
    valid = true;
  } else {
    printf("Not a valid amount!\n");
  }
  // Alternative:
  // if(nAmt > *nBalance)
  //  printf("Insufficient Balance of not valid!");
  // else if(nAmt > 0)
  //   *nBalance -= nAmt;
  // else
  //   printf(:Not a valid amount!\n);
  return valid;
}

TransactionType getTransactionType(void) {
  TransactionType choice;

  printf("Please select a transaction: \n");
  printf("\t1 - Deposit\n");
  printf("\t2 - Withdrawal\n");
  printf("\t3 - View Balance\n");
  printf("\t4 - Exit\n");
  printf("Choice: ");
  scanf(" %d", &choice);

  return choice;
}

void processTransaction(TransactionType transactionType, double* lfBalance) {
  switch (transactionType) {
    case DEPOSIT:
      if (deposit(lfBalance)) {
        displayBal(*lfBalance);
      }
      break;
    case WITHDRAWAL:
      if (withdrawal(lfBalance)) {
        displayBal(*lfBalance);
      }
      break;
    case VIEW_BALANCE:
      displayBal(*lfBalance);
      break;
    default:
      printf(
          "You either chose exit or an invalid choice! Thank you and have a "
          "nice "
          "day!");
  }
}

int main() {
  double lfBalance = 10000.0;
  TransactionType transactionType;

  transactionType = getTransactionType();
  processTransaction(transactionType, &lfBalance);

  return 0;
}
