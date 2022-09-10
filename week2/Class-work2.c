#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

//Exercise 1
void func1()
{
	int* ptr = malloc(4 * sizeof(int));
	int* original = ptr;

	
	for (int i = 0; i < 4; i++)
	{
		int number;
		printf("Please enter a number + ENTER\n");
		scanf("%d", &number);
		*ptr = number;
		ptr++;
		printf("The number that you entered is: %d\n", number);
	}
	
	free(original);
}

//Exercise 2
//הפונקציה צריכה להיות מסוג פויינטר של אינט כי מחזירים פויינטר
int* alloc5Numbers(int num1, int num2, int num3, int num4, int num5) 
{
	int* ptr = malloc(5 * sizeof(int));
	int* original = ptr;

	if (ptr == NULL) // Every time that we use malloc we need to do this - if, else. There can be no memory.
	{
		printf("ERROR");
	}
	else
	{
		*ptr = num1;
		ptr++;

		*ptr = num2;
		ptr++;

		*ptr = num3;
		ptr++;

		*ptr = num4;
		ptr++;

		*ptr = num5;
	}

	return original;
}

int printNum(int* numberList)
{
	int* ptr = numberList;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		int number = *ptr;
		printf("%d", number);
		sum = sum + number;
		ptr++;
	}

	return sum;
}

//Exercise 3
void enterNumbersThatYouWantToSum(int mult)
{
	int* ptr = malloc(mult * sizeof(int));
	int* original = ptr;

	int sum = 0;
	for (int i = 0; i < mult; i++)
	{
		int number;
		printf("please enter a number + ENTER\n");
		scanf("%d", &number);
		*ptr = number;
		sum = sum + *ptr;
		ptr++;
	}

	printf("The sum is: %d", sum);
	free(original);
}



int main_2_1()
{
	printf("//Exercise 1\n");
	func1();

	printf("//Exercise 2\n");
	int* ptr2 = alloc5Numbers(1, 2, 3, 4, 5);
	int sum = printNum(ptr2);
	printf("\nThe sum of the numbers above is: %d\n", sum);
	free(ptr2);

	printf("//Exercise 3\n");
	int number;
	printf("Please enter a number of numbers that you want to sum + ENTER\n");
	scanf("%d", &number);
	enterNumbersThatYouWantToSum(number);


	return 0;
}
