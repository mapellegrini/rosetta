import java.util.Scanner;

public class primes
{
    public static boolean isprime(int number){
	int cur;
	for (cur = 2; cur < number; cur++){
	    if (number % cur == 0){
		return false;
	    }
	}
	return true;
    }

    
    public static void main(String[] args)
    {
	int number;
	for (number=2; number < 100; number++){
	    if(isprime(number)){
		System.out.println(number + " is prime");
	    }
	    else{
		System.out.println(number + " is not prime");
	    }
	}
    }
}
