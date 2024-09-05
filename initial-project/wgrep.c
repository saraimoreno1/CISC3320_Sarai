#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {


  char *buffer = NULL;
  size_t bufsize = 32;
  

  if(argc <= 1) {
    printf("wgrep: searchterm [file...]\n");
    exit(1);
  }

FILE *file;
  if(file == NULL) {
    printf("wgrep: cannot open file\n");
    exit(1);
  }

  char *tag = argv[1];
  char *file_name = argv[2];

  if(file_name)
    file = fopen(file_name, "r");
    else
      file = stdin;

  while(getline(&buffer, &bufsize, file) != 1) {
    if(strstr(buffer, tag)) {
      printf("%s", buffer);
 }
  }
  fclose(file);
  free(buffer);

  return 0;
}

