#include <stdio.h>
#include <string.h>
#define SIZE 80
char * s_gets(char * str, int n);
int main(void)
{
	char flower[SIZE];
	char addon [] = "s smell like old shoes.";

	puts("Whar is your favorite flower?");
	if (s_gets(flower, SIZE))
	{
		printf("the length of flower %s is %lu,so the function strlen() doesn't count the character \'\\0\'\n", flower, strlen(flower));
		strcat(flower, addon);
		puts(flower);
		puts(addon);
	}
	else
		puts("End of file encountered!");
	puts("bye");

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
