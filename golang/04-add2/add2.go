package main

import "fmt"

func main() {
	var var1, var2 int;
	fmt.Print("Enter a number: ")
	_, _ = fmt.Scanf("%d", &var1)
	fmt.Print("Enter another number: ")
	_, _ = fmt.Scanf("%d", &var2)
	fmt.Println("The sum is ", var1 + var2)
}
