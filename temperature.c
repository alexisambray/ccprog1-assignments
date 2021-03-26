#include <stdio.h>

float convertFahrToCelsius(const float fahrenheit);
float convertCelsiusToKelvin(const float celsius);

int main() {
  float fahrenheit, celsius, kelvin;

  printf("Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = convertFahrToCelsius(fahrenheit);
  kelvin = convertCelsiusToKelvin(celsius);
  printf("\nCelsius: %.2f\n", celsius);
  printf("Kelvin: %.2f\n", kelvin);

  return 0;
}

float convertFahrToCelsius(const float fahrenheit) {
  return 5.0 / 9.0 * (fahrenheit - 32);
}

float convertCelsiusToKelvin(const float celsius) {
  return celsius + 273;
}