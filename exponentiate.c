#include <stdio.h>

int exponentiate(int base, int exponent) {
  int i, result = 1;

  for (i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}

int main() {
  int base, exponent;

  printf("Input an integer: ");
  scanf("%d", &base);

  printf("Input exponent: ");
  scanf("%d", &exponent);

  printf("%d raised to %d is %d.\n", base, exponent,
         exponentiate(base, exponent));

  return 0;
}
