#include "functions.h"

int chk_input(long float num) {
  if(num == 0) return 1;
  return 0;
}


long float add(long float num1, long float num2) {
  return num1 + num2;
}


long float sub(long float num1, long float num2) {
  return num1 - num2;
}


long float mult(long float num1, long float num2) {
  return num1 * num2;
}


long float div(long float num1, long float num2) {
  return num1 / num2;
}
