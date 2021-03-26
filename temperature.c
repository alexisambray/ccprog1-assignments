#include <stdio.h>

float convertFtoC(float fahrenheit) {
  return 5.0 / 9.0 * (fahrenheit - 32);
}

float convertCtoK(celsius) {
  return celsius + 273;
}

int main() {
  float fahrenheit, celsius, kelvin;

  printf("Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = convertFtoC(fahrenheit);
  kelvin = convertCtoK(celsius);
  printf("\nCelsius: %.2f\n", celsius);
  printf("Kelvin: %.2f\n", kelvin);

  return 0;
}