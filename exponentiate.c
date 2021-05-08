#include <stdio.h>

int exponentiate(int base, int exponent) {
  int i, result = 1;

  for (i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}

int getInteger(char prompt[20]) {
  int integer;
  printf("%s", prompt);
  scanf("%d", &integer);

  return integer;
}

void displayResult(int base, int exponent, int result) {
  printf("%d raised to %d is %d.\n", base, exponent, result);
}

int main() {
  int base, exponent;

  base = getInteger("Input an integer: ");
  exponent = getInteger("Input exponent: ");

  displayResult(base, exponent, exponentiate(base, exponent));

  return 0;
}
