#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list ap;
    int j, sum=0;

    va_start(ap, count);
    for (j = 0; j < count; j++) {
        sum += va_arg(ap, int); /* Increments ap to the next argument. */
    }
    va_end(ap);

    return sum;
}



int main(){
  printf("Sum of 1 + 2 + 3 = %d\n", sum(3, 1, 2, 3));
  printf("Sum of 0, 0.... 0, 1 = %d\n", sum(5, 0, 0, 0, 0, 1));
  return 0;
}
