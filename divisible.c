#include <stdio.h>

int getInteger(void) {
  int integer;
  printf("Input an integer: ");
  scanf("%d", &integer);
  return integer;
}

void game(void) {
  int sum = 0;

  do {
    sum += getInteger();
  } while (sum % 4 != 0 && sum % 10 != 0);
}

int main() {
  game();
  printf("Thanks for playing!\n");

  return 0;
}
