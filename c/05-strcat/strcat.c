#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * custom_strcat(char * str1, char * str2)
{
  int len1, len2, j;
  char * res;
  
  len1 = strlen(str1);
  len2 = strlen(str2);
  res = malloc(sizeof(char) * (len1 + len2));

  for (j=0; j < len1; j++){
    res[j] = str1[j];
  }
    
  for (j=0; j < len2; j++){
    res[len1 + j] = str2[j];
  }
  return res;
}


int main(){
  char * base, * end1, * end2, * combined1, * combined2;
  
  base = "Hello my name is ";
  end1 = "Alice";
  end2 = "Bob";


  combined1 = custom_strcat(base, end1);
  combined2 = custom_strcat(base, end2);
    
  printf("'%s' + '%s' = '%s'\n", base, end1, combined1);
  printf("'%s' + '%s' = '%s'\n", base, end2, combined2);

  free(combined1);
  free(combined2);
  return 0;
}
