// program named mainreturn.c
#include <stdio.h>
//sleep program
#include <unistd.h>
// defining main with arguments
int main(int argc, char* argv[])
{
// the minus 1 is to ignore the ./ part, that is not required but I did it
	printf("You have entered %d arguments:\n", argc - 1);

	for (int i = 1; i < argc; i++) {
		printf("%s\n", argv[i]);
		sleep(1);
	}
	sleep(5);
	return 0;
}
