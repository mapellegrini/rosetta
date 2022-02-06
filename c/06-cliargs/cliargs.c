#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * get_arg(int argc, char ** argv, char * searchstr, int offset){
  int c;
  for (c=0; c < argc; c++){
    if (argv[c][0] == '-'){
      if (strcmp(argv[c] + sizeof(char), searchstr) == 0){
	return argv[c+offset];
      }
    }
  }
  return NULL;
}

int get_cli_int(int argc, char ** argv){
  return atoi(get_arg(argc, argv, "i", 1));
}

char * get_cli_str(int argc, char ** argv){
  return get_arg(argc, argv, "s", 1);
}

int get_cli_bool(int argc, char ** argv){
  char *  val;
  val = get_arg(argc, argv, "b", 0);
  if (val)
    return 1;
  return 0;
}


int main( int argc, char *argv[] )  {
  printf("int (-i) = %d\n", get_cli_int(argc, argv));
  printf("str (-s) = %s\n", get_cli_str(argc, argv));
  printf("bool (-b) = %d\n", get_cli_bool(argc, argv));
}
