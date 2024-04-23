#include<stdio.h>

void copy_arr(char *arr, int size, char *new_arr);
void print_arr(char arr[], int size);

int main() {
  char arr[14] = {'M', 'U', 'H', 'A', 'M', 'M', 'A', 'D', ' ', 'O', 'S', 'A', 'M', 'A'};
  char new_arr[14];

  printf("Welcome to coping array using pointer arithmetic\n\n");
  printf("\nOriginal char array: ");
  print_arr(arr, 14);
  copy_arr(arr, 14, new_arr);
  printf("\nCopied char array: ");
  print_arr(new_arr, 14);

  return 0;
}

void copy_arr(char *arr, int size, char *new_arr) {
  for (int i = 0 ; i < size; i++) {
    *(new_arr + i) = *(arr + i);

    // *new_arr = *arr;
    // new_arr++;
    // arr++;
  }
}

void print_arr(char arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%c", arr[i]);
  }
}