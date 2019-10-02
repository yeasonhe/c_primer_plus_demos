#include <stdio.h>
#include <string.h>
#define SIZE 80
#define BUGSIZE 13
char * s_gets(char * str, int n);
int main(void)
{
	char flower[SIZE];
	char addon [] = "s smell like old shoes.";
	char bug[BUGSIZE];
	int available;

	puts("Whar is your favorite flower?");
	s_gets(flower, SIZE);
	if (strlen(flower) + strlen(addon) + 1 <= SIZE)
		strcat(flower, addon);
	puts(flower);
	puts("What is your favorite bug?");
	s_gets(bug,BUGSIZE);
	available = BUGSIZE - strlen(bug) - 1;
	strncat(bug, addon, available);
	puts(bug);

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
