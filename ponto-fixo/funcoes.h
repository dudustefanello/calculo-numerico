#include "entrada.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

typedef struct funcao{
  int i;
  double (*funcao)(double x);
  char func[100], fi[100];
}funcao;

double f01(double x){
  return 2 * cos(x) - x;
}

double f02(double x){
  return cos(x);
}

double f11(double x){
  return sqrt(7*x);
}

double f12(double x){
  return x*x/7;
}

double f13(double x){
  return x*x-6*x;
}

double f21(double x){
  return 2*x + 10*sin(x);
}

double f22(double x){
  return 10*sin(x) / 2;
}

funcao funcoes[] = {
  0, f01, "f(x) = cos(x) - x", "fi(x) = 2 * cos(x) - x",
  1, f02, "f(x) = cos(x) - x", "fi(x) = cos(x)",
  2, f11, "f(x) = x^2 - 7x", "fi(x) = sqrt(7x)",
  3, f12, "f(x) = x^2 - 7x", "fi(x) = x^2 / 7",
  4, f13, "f(x) = x^2 - 7x", "fi(x) = x^2 - 6x",
  5, f21, "f(x) = x^2 + 10cos(x)", "f(x) = 2x + 10sin(x)"
  6, f22, "f(x) = x^2 + 10cos(x)", "f(x) = 10sin(x)/2",
};
