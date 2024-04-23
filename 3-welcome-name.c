#include <stdio.h>

int main() {
  char name[20];
  printf("Please enter your name: ");
  scanf(" %19s", name);
  printf("Welcome %s to Osama's GitHub!.", name);
}