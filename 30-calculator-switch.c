#include<stdio.h>

int main() {
  float first, second;
  char opr;
  printf("Welcome to calculator\n");
  printf("Please enter the first number: ");
  scanf("%f", &first);
  printf("Now, enter the second number: ");
  scanf("%f", &second);
  printf("Finally, enter the operation(+, -, *, /): ");
  scanf(" %c", &opr);

  float result;
  int invalid = 0;
  switch (opr)
  {
  case '+': result = first + second;
    break;
  case '-': result = first - second;
    break;
  case '*': result = first * second;
    break;
  case '/': result = first / second;
    break;
  default:
    invalid = 1;
    break;
  }
  
  if (invalid == 0) {
    printf("The result is: %.2f", result);
  } else {
    printf("Invalid operator, please enter (+, -, *, /)");
  }
  return 0;
}