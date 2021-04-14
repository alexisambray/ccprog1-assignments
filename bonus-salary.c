/* [Lab Manual] Conditional Statements (Programming) Question 3 */
#include <stdio.h>

int main() {
  float total_weekly_salary, basic_salary, hourly_rate;
  int no_of_hours;

  printf("What is your standard hourly pay rate? ");
  scanf("%f", &hourly_rate);

  printf("Number of hours worked: ");
  scanf("%d", &no_of_hours);

  basic_salary = no_of_hours * hourly_rate;
  total_weekly_salary = basic_salary;

  if (no_of_hours > 45) {
    total_weekly_salary = basic_salary + 100;
    printf("Your salary is %f", total_weekly_salary);
  } else if (no_of_hours > 40 && no_of_hours <= 45) {
    total_weekly_salary = basic_salary + 50;
    printf("Your salary is %f", total_weekly_salary);
  } else if (no_of_hours > 35 && no_of_hours <= 40) {
    total_weekly_salary = basic_salary + 35;
    printf("Your salary is %f", total_weekly_salary);
  } else
    printf("No bonus!");

  return 0;
}
