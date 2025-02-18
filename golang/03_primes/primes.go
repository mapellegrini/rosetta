package main

import "fmt"

func isprime(number int) bool {
    for i := 2; i < number; i++ {
        if number % i == 0 {
	    return false;
	}
    }	
    return true;
}

func main() {
    for number := 2; number < 100; number++ {
        if isprime(number){
            fmt.Println(number, " is prime");
        } else {
            fmt.Println(number, " is not prime");
        }
    }
}