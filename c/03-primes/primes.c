#include <stdio.h>
#include <stdbool.h> 

bool isprime(int number)
{
  int cur;
  for (cur = 2; cur < number; cur++){
    if (number % cur == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int number;
  for (number=2; number < 100; number++){
    if (isprime(number)){
	printf("%d is prime\n", number);
      }
    else{
      printf("%d is not prime\n", number);
    }
  }
  return 0;
}
