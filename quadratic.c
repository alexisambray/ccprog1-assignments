#include <math.h>
#include <stdio.h>

typedef struct {
  double a, b, c;

} QuadraticEquation;

void displayRoots(const double x1, double x2);
QuadraticEquation getQuadraticEquation(void);
double calcDiscriminant(const QuadraticEquation quadraticEquation);
void solveQuadraticEquation(const QuadraticEquation quadraticEquation,
                            double* x1,
                            double* x2);

int main() {
  QuadraticEquation quadraticEquation = getQuadraticEquation();
  double x1, x2;

  solveQuadraticEquation(quadraticEquation, &x1, &x2);
  displayRoots(x1, x2);

  return 0;
}

QuadraticEquation getQuadraticEquation(void) {
  QuadraticEquation quadraticEquation;

  puts("ax^2 + bx + c = 0");

  printf("Value for a: ");
  scanf(" %lf", &(quadraticEquation.a));

  printf("Value for b: ");
  scanf(" %lf", &(quadraticEquation.b));

  printf("Value for c: ");
  scanf(" %lf", &(quadraticEquation.c));

  return quadraticEquation;
}

void solveQuadraticEquation(const QuadraticEquation quadraticEquation,
                            double* x1,
                            double* x2) {
  double discriminant = calcDiscriminant(quadraticEquation);
  *x1 = (-quadraticEquation.b + sqrt(discriminant)) / 2 * quadraticEquation.a;
  *x2 = (-quadraticEquation.b - sqrt(discriminant)) / 2 * quadraticEquation.a;
}

double calcDiscriminant(const QuadraticEquation quadraticEquation) {
  return pow(quadraticEquation.b, 2) -
         4 * (quadraticEquation.a) * (quadraticEquation.c);
}

void displayRoots(const double x1, const double x2) {
  printf("The roots are {%.2lf, %.2lf}\n", x1, x2);
}
