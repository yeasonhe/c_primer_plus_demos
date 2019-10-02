#include <stdio.h>

void putl(const char *);
int main(void){
	char str[10];
	put1("Please input a string\n");
	scanf("%10s",str);
	return 0;
}
void put1(const char * string){
	while(*string != '\0')
		putchar(*string++);
}
