CC=gcc

run: cliargs
	./cliargs -i 5 -s cat -b --double triple

cliargs:
	$(CC) -o cliargs cliargs.c

clean:
	rm -f cliargs
