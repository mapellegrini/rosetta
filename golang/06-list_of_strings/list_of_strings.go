package main

import "fmt"

func main() {
    var userstr string = ""
    userlist := []string{}
	
    for userstr != "-1" {
        fmt.Print("Enter a string (Enter -1 to quit): ")
	fmt.Scanf("%s", &userstr)
	userlist = append(userlist, userstr)
	fmt.Print(userlist, "\n")    
    }
}
