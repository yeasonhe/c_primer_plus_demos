#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"
char * s_gets(char * str, int n);
int main(void)
{	
	char input[LIM][SIZE];
	int ct = 0;

	printf("Enter up to %d lines (type quit to quit):\n", LIM);
	//the codes below can also end the program with strcmp(input[ct],STOP)
	while (ct < LIM && s_gets(input[ct],SIZE) != NULL && (input[ct][0] != '\0'))
		ct++;
	printf("%d strings entered\n", ct);
	int i =0;
	while( i <= ct)
	{
		puts(input[i++]);
	}
	return 0;
}

char * s_gets(char * str, int n)
{
	char * ret_val;
	int i = 0;
	ret_val = fgets(str,n,stdin);
	if(ret_val)
	{
		while(ret_val[i] != '\n' &&  ret_val[i] != '\0')
			i++;
		if(ret_val[i] == '\n')
			ret_val[i] = '\0';
		else
			while(getchar() != '\n')
				continue;
	}

	return ret_val;
}
