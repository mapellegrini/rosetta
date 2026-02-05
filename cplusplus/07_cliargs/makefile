CC=g++

run: cli_args
	./cli_args -b -i 5 -s cat --s2 dog

cli_args:
	$(CC) -o cli_args cli_args.cpp

clean:
	rm -f cli_args
