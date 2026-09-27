#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  for (int i = 1; i < argc; i++) {
    char* file_name = argv[i];
    FILE* fp = fopen(file_name, "r");
    if (fp == NULL) {
      printf("wcat: cannot open file\n");
      exit(1);
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
      printf("%s", buffer);
    }
  }
  return 0;
}
