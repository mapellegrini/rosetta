#include <stdio.h>

#define ARRAY_LENGTH 10

int array_init(int * array, int array_length){
  int j;
  for (j=0; j < ARRAY_LENGTH; j++){
    array[j] = j * 2; 
  }
  return 0;
}


int array_printer(int * array, int array_length)
{
  int j;
  for (j=0; j < array_length; j++){
    printf("array[%d] = %d\n", j, array[j]);
  }

  return 0;
}

int array_increment(int * array, int array_length){
  int j;
  for (j=0; j < ARRAY_LENGTH; j++){
    array[j] += 1; 
  }
  return 0;
}



int main(){
  int array[ARRAY_LENGTH];

  printf("Array:\n");
  array_init(array, ARRAY_LENGTH);
  array_printer(array, ARRAY_LENGTH);

  printf("\n\nArray incremented:\n");
  array_increment(array, ARRAY_LENGTH);
  array_printer(array, ARRAY_LENGTH);
  return 0;
}
