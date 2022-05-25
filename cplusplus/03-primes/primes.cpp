#include <iostream>

bool isprime(int number)
{
    for (int cur = 2; cur < number; cur++){
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
	    std::cout << number << " is prime\n";
	}
	else{
	    std::cout << number << " is not prime\n";
	}
    }
    return 0;
}
