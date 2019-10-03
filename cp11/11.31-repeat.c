/* repeat.c --带参数的 main() */
#include <stdio.h>
//also the main can be: int main(int argc, char **argv)
//the command also can be: a.exe "I am hungry" now,to indicate two parameters
//like this below
//$ ./a.exe "I am hungry" now
//The command lne has 2 arguments:
//1: I am hungry
//2: now

int main(int argc, char *argv [])
{
	int count;

	printf("The command lne has %d arguments:\n",argc - 1);
	for (count = 1; count < argc; count++)
		printf("%d: %s\n",count, argv[count]);
	printf("\n");

	return 0;
}
