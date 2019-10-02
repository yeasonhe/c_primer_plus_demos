#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40

int main(void)
{
	const char * orig = WORDS;
	//note below codes is right
	char copy[SIZE] = "Be the best that you can be.";
	//while below is syntax error(assignment to expression with array type)
	//char copy[SIZE];
	//copy = "Be the best that you can be";
	char * ps;
	puts(copy);
	puts(orig);

	ps = strcpy(copy + 7, orig);
	puts(copy);
	puts(ps);
	return 0;
}
