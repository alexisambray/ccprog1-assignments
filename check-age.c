/* [Lab Manual] Conditional Statements (Programming) Question 1 */
#include <stdio.h>

int main() {
  int nAge;
  float fPrice;

  printf("Enter total price: ");
  scanf("%f", &fPrice);

  printf("How old are you? ");
  scanf("%d", &nAge);

  if (nAge >= 13 && nAge <= 19) {
    printf("Price:\t\t\t%.2f\n", fPrice);
    printf("Less:\t\t\t%.2f\n", fPrice * 0.1);
  }
  printf("=================\n");
  printf("Final Sale Price:\t%.2f", fPrice);

  return 0;
}
