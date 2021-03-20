#include <stdio.h>

float kilometersToMeters(const float kilometers);
float getKilometers(void);

int main() {
  float kilometers = getKilometers();
  float meters = kilometersToMeters(kilometers);
  printf("%.2f km is equal to %.2f m.\n", kilometers, meters);

  return 0;
}

float kilometersToMeters(const float kilometers) {
  return kilometers * 1000;
}

float getKilometers(void) {
  printf("Enter the distance in kilometers: ");
  float kilometers;
  scanf("%f", &kilometers);

  return kilometers;
}