#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

int main(int argc, char *argv[]) {
	int i = 0;
  if (argc != 2) {
    printf("Error\n");
    return 1;
  }

  int num_bytes = atoi(argv[1]);

  if (num_bytes <= 0) {
    printf("Error\n");
    return 2;
  }

  print_opcodes(num_bytes);

  return 0;
}

void print_opcodes(int num_bytes) {
  unsigned char *ptr = (unsigned char *)print_opcodes;
int i = 0;
  for ( i = 0; i < num_bytes; i++) {
    printf("%02x", *(ptr + i));
  }

  printf("\n");
}

