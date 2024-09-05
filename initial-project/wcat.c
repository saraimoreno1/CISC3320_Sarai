#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE (518)

int main(int argc, char *argv[]) {

  char buffer[BUFFER_SIZE];
  FILE *fp;

  for(int i = 1; argv[i]; i++) {
    fp = fopen(argv[1], "r");
  if (fp == NULL) {
    printf("my-cat: cannot open file\n");
    exit(1);
  }

   while (fgets(buffer, BUFFER_SIZE, fp) != NULL)
    printf("%s", buffer);

   printf("\n");

  if(ferror(fp)) {
    printf("wcat: could not read file");
    fclose(fp);
    exit(1)
      }
  }

  fclose(fp);
  return 0;
}
