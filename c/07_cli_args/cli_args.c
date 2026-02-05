#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Iterate through argc and argv for a given CLI parameter called searchstr
If found, return a string containing the value of that param
Offset indicates how far apart the value is from the key


Examples:

argv = ["-length", "5", "-width", "6"]
searchstr = "width"
offset = 0
Returns: "-width"

argv = ["-length", "5", "-width", "6"]
searchstr = "width"
offset = 1
Returns: "6"
 */
char *get_arg(int argc, char **argv, char *searchstr, int offset) {
  int c;
  for (c = 0; c < argc; c++) {
    if (argv[c][0] == '-') {
      if (argv[c][1] == '-') {
        if (strcmp(argv[c] + sizeof(char) * 2, searchstr) == 0) {
          return argv[c + offset];
        }
      } else if (strcmp(argv[c] + sizeof(char), searchstr) == 0) {
        return argv[c + offset];
      }
    }
  }
  return NULL;
}

int get_cli_int(int argc, char **argv) {
  char *found = get_arg(argc, argv, "i", 1);
  if (found == NULL) {
    return -1;
  }
  return atoi(found);
}

char *get_cli_str(int argc, char **argv) { return get_arg(argc, argv, "s", 1); }

/*
Returns 1 if a boolean parameter is found in the CLI args, 0 otherwise
 */
int get_cli_bool(int argc, char **argv) {
  char *val;
  val = get_arg(argc, argv, "b", 0);
  if (val)
    return 1;
  return 0;
}

int main(int argc, char *argv[]) {
    //bool
    printf("-b = %d\n", get_cli_bool(argc, argv));

    //integer
    printf("-i = %d\n", get_cli_int(argc, argv));

    //string
    printf("-s = %s\n", get_cli_str(argc, argv));

    //string with double hypten
    printf("--s2 = %s\n", get_arg(argc, argv, "s2", 1));
}
