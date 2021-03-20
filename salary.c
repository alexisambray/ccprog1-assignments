#include <stdio.h>

#define INCREASE_RATE 15.5
#define NUM_MONTHS 2

double getOldSalary(void);
double calcRetroactivePay(const double oldSalary);
double calcCurrentSalary(const double oldSalary);
void displayResult(const double currentSalary, const double retroactivePay);

int main() {
  double oldSalary = getOldSalary();
  double retroactivePay = calcRetroactivePay(oldSalary);
  double currentSalary = calcCurrentSalary(oldSalary);

  displayResult(currentSalary, retroactivePay);

  return 0;
}

double getOldSalary(void) {
  printf("Enter your old salary: ");
  double oldSalary;

  scanf(" %lf", &oldSalary);
  return oldSalary;
}

double calcRetroactivePay(const double oldSalary) {
  return (oldSalary * INCREASE_RATE / 100) * NUM_MONTHS;
}

double calcCurrentSalary(const double oldSalary) {
  return oldSalary * (1 + INCREASE_RATE / 100);
}

void displayResult(const double currentSalary, const double retroactivePay) {
  printf("Current pay:\t\tPhp %.2lf\n", currentSalary);
  printf("Retroactive pay:\tPhp %.2lf\n", retroactivePay);
  printf("Gross  pay:\t\tPhp %.2lf\n", currentSalary + retroactivePay);
}