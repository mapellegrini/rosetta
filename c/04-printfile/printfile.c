#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

off_t get_file_size(char * path){
  //returns the size of a file (in bytes), or -1 if the file does not exist
  struct stat st; 

  if (stat(path, &st) == 0)
    return st.st_size;

  return -1; 
}

int rstrip(char * mystr)
{
  int len, pos;
  len = strlen(mystr);
  
  for (pos=len-1; pos>=0; pos--)
    {
      if (mystr[pos] == ' '){
	mystr[pos] = '\0';
      }
      else if (mystr[pos] == '\n'){
	mystr[pos] = '\0';
      }
      else{
	break;
      }
    }
  return 0;
}


int main(){
  char path [255];
  char * filebuf; 
  int filesize;
  FILE * fp;
  
  printf("Enter the complete path to a file: ");
  fgets(path, 255, stdin);
  rstrip(path);
  
  filesize = get_file_size(path);
  if (filesize == -1){
    printf("Error - could not get the size of that file\n");
    return 1;
  }

  printf("The size of that file is %d\n", filesize);
  //allocate memory
  filebuf = malloc(sizeof(char) * filesize);
  
  fp = fopen(path, "r");
  fgets(filebuf, filesize+1, fp);

  printf("Read in:\n%s\n", filebuf);

  //free memory
  free(filebuf);
  
}
