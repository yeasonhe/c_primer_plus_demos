/* global.c -- 使用外部变量 */
#include<stdio.h>

int units; /* 外部变量 */
void critic(void);

int main(void)
{
	extern int units; /* 可选的重复声明 */

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d",&units);
	while(units != 56)
		critic();
	printf("You must hava looked it up!\n");
	
	return 0;
}

void critic(void)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d",&units);
}
