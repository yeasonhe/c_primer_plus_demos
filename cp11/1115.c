#include <stdio.h>

int put2(const char * string);

int main(void)
{
	int count;
	count = put2("pizza");
	printf("The count of %s is %d","pizza",count);
	return 0;

}
int put2(const char * string){
	int count = 0;
	while(*string){
	putchar(*string++);
	count++;
	}
	putchar('\n');
	return(count);
}
