#include <stdio.h>
#pragma warning(disable: 4996)

//Exercise 1
unsigned char stepLeft(unsigned char num, unsigned char movesLeft)
{
	unsigned char newNumber = num << movesLeft;
	printf("The new number is: %d\n", newNumber);

	return newNumber;
}

//Exercise 3 - class  //prints incorrect - the number is reversed
void numberInBit(unsigned char num)
{
	unsigned char proccedNum = num;
	unsigned char mask = 0b00000001;

	for (int i = 0; i < 8; i++)
	{
		char oneBit = proccedNum & mask;
		proccedNum = proccedNum >> 1;
		printf("%d", oneBit);
	}

	printf("\n");
}

//Exercise 3 - another way
void numberBit(unsigned char num)
{
	unsigned char proccedNum = num;
	unsigned char mask = 0b10000000;

	for (unsigned char i = 0; i < 8; i++)
	{
		char oneBit = proccedNum & mask;
	
		if (oneBit != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

		mask = mask >> 1;
	}
	printf("\n");
}


int main_1_1()
{
	printf("//Exercise 1\n");
	unsigned char a = stepLeft(35, 3);

	printf("//Exercise 3 - class\n");
	numberInBit(15);
	printf("//Exercise 3 - another way\n");
	numberBit(15);

	return 0;
}









