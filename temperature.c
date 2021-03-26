#include <stdio.h>

double convertFahrToCelsius(const double fahrenheit);
double convertCelsiusToKelvin(const double celsius);

int main() {
  double fahrenheit, celsius;

  printf("Fahrenheit: ");
  scanf(" %lf", &fahrenheit);

  celsius = convertFahrToCelsius(fahrenheit);

  printf("\nCelsius: %.2lf\n", celsius);
  printf("Kelvin: %.2lf\n", convertCelsiusToKelvin(celsius));

  return 0;
}

double convertFahrToCelsius(const double fahrenheit) {
  return 5.0 / 9.0 * (fahrenheit - 32);
}

double convertCelsiusToKelvin(const double celsius) {
  return celsius + 273;
}
