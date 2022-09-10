#include <stdio.h>
#pragma warning(disable: 4996)

//Exercise 1
void theBit(unsigned char bit)
{
	for (unsigned char i = 0; i < 8; i++)
	{
		if (i == 8 - bit)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}

	printf("\n");
}

int main1_2()
{
	printf("//Exercise 1\n");
	theBit(2);


	return 0;
}

