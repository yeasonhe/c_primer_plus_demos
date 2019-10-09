/* 使用位操作显示二进制 */
#include <stdio.h>
#include<limits.h> //提供CHAR_BIT 定义，CHAR_BIT 表示每字节的位数
char * itobs(int, char *);
void show_bstr(const char *);

int invert_end(int num, int bits);
int main(void)
{	
	char bin_str[CHAR_BIT * sizeof(int) + 1];
	int number;

	puts("Non-numeric input terminates program");
	while(scanf("%d",&number) == 1)
	{
		itobs(number, bin_str);
		printf("%d is ",number);
		show_bstr(bin_str);
		putchar('\n');

		int ret = invert_end(number,4);
		printf("Inverting the last 4 bits gives\n");
		itobs(ret, bin_str);
		show_bstr(bin_str);
		putchar('\n');

	}
	puts("Bye!");

	return 0;
}

char * itobs(int n, char * ps)
{	
	int i;
	const static int size = CHAR_BIT * sizeof(int);
	for(i = size - 1;i >= 0;i--,n >>= 1)
		ps[i] = (01 & n) + '0';
	ps[size] = '\0';
	return ps;
}

void show_bstr(const char * str)
{
	int i = 0;
	while(str[i])
	{
		putchar(str[i]);
		if(++i % 4 == 0 && str[i])
			putchar(' ');
	}
}

int invert_end(int num, int bits)
{
	int mask = 0;
	int temp = 1;
	while(bits-- > 0 ){
		mask |=temp;
		temp <<= 1;
	}

	return num ^ mask;
}


