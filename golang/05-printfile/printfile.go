package main

import (
	"fmt"
	"os"
	"bufio"
	"strings"
	"io/ioutil"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter the complete path to a file: ")
	path, err := reader.ReadString('\n')
	path = strings.TrimSpace(path)
	
	_, err = os.Stat(path)
	if (os.IsNotExist(err)) {
		fmt.Print("Cannot read file: ", path)
		os.Exit(1)
	}
	
	content, err := ioutil.ReadFile(path)
	fmt.Print("Read in:\n", string(content), "\n")
}
	
