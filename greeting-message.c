/* [Lab Manual] Conditional Statements (Programming) Question 2 */
#include <stdio.h>

int main() {
  int nTime;

  printf("Input time of entry: ");
  scanf("%d", &nTime);

  if (nTime >= 0000 && nTime <= 2359)
    if (nTime < 1200)
      if (nTime < 800)
        printf("You're early! Good morning!");
      else
        printf("Good morning!");
    else if (nTime < 1800)
      printf("Good afternoon!");
    else if (nTime < 2359)
      printf("Good evening!");
    else
      printf("Invalid time entered");

  return 0;
}
