#include "functions.h"

int chk_input(double num) {
  if(num == 0) return 1;
  return 0;
}


double add(double num1, double num2) {
  return num1 + num2;
}


double sub(double num1, double num2) {
  return num1 - num2;
}


double mult(double num1, double num2) {
  return num1 * num2;
}


double div(double num1, double num2) {
  return num1 / num2;
}
