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

int main() {
  int base, exponent;

  base = getInteger("Input an integer: ");
  exponent = getInteger("Input exponent: ");

  printf("%d raised to %d is %d.\n", base, exponent,
         exponentiate(base, exponent));

  return 0;
}
