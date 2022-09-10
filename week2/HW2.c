#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable :4996)

// Exercise 1
char howManyChar()
{
	FILE* f;
	f = fopen("C:\\week2 lesson 08.22 C\\File1.txt", "r");
	
	if (f == NULL)
	{
		printf("ERROR, the file is empty");
	}
	else
	{
		char ch = fgetc(f);
		int counter = 0;

		while (ch != EOF)
		{
			ch = fgetc(f);
			counter++;
		}
		
		printf("This file has %d characters\n", counter);

		fclose(f);
	}
}

// Exercise 2
char howManyAsterisk()
{
	FILE* f = fopen("C:\\week2 lesson 08.22 C\\File1.txt", "r");
	
	if (f == NULL)
	{
		printf("ERROR, the file is empty");
	}
	else
	{
		char ch = fgetc(f);
		int counter = 0;

		while (ch != EOF)
		{
			ch = fgetc(f);
			if (ch == '*')
			{
				counter++;
			}
		}

		printf("This file has %d asterisks\n", counter);

		fclose(f);
	}
}

// Exercise 3
char howManyLines()
{
	FILE* f = fopen("C:\\week2 lesson 08.22 C\\File2.txt", "r");

	if (f == NULL)
	{
		printf("ERROR, the file is empty\n");
	}
	else
	{
		char ch = fgetc(f);
		int counter = 1;

		while (ch != EOF)
		{
			ch = fgetc(f);
			if (ch == '\n')
			{
				counter++;
			}
		}

		printf("This file has %d lines", counter);

		fclose(f);
	}
}

// Exercise 4
void readFile()
{
	FILE* f = fopen("C:\\week2 lesson 08.22 C\\File3.txt", "r");
	
	if (f == NULL)
	{
		printf("ERROR, the file is empty\n");
	}
	else
	{
		int counterInt = 0; //counter for the sum of integers in the file 
		int counterChar = 0; //counter for the sum of characters in the file 
		int* arrInt; 
		char* arrChar;
		int* ptrInt;
		char* ptrChar;
		int number;
		char ch = 0;

		while (ch != EOF)
		{
			number = fgetc(f) - '0'; //convert a character to an integer
			ch = fgetc(f); 
			
			if (ch != EOF)
			{
				if (ch == 'c')
				{
					counterChar = counterChar + number; //gives you the total amount of characters that you need to allocate memory space for
				}
				else
				{
					counterInt = counterInt + number; //gives you the total amount of integers that you need to allocate memory space for
				}
			}
		}

		arrChar = malloc(counterChar * sizeof(char)); 
		ptrChar = arrChar; //will stay in the beginning of arrChar (important for free)
		arrInt = malloc(counterInt * sizeof(int));
		ptrInt = arrInt; ////will stay in the beginning of arrInt (important for free)

		printf("Please enter %d characters:\n", counterChar);
		for (int i = 0; i < counterChar; i++)
		{
			char character;
			scanf(" %c", &character); //needs space in the beginning because when you press ENTER its counted as a character
			*arrChar = character;
			arrChar++;
		}

		printf("Please enter %d integer numbers:\n", counterInt);
		for (int i = 0; i < counterInt; i++)
		{
			int num;
			scanf("%d", &num);
			*arrInt = num;
			arrInt++;
		}

		fclose(f);
		free(ptrChar);
		free(ptrInt);

	}
}


int main_2_2()
{
	printf("// Exercise 1\n");
	howManyChar();
	printf("// Exercise 2\n");
	howManyAsterisk();
	printf("// Exercise 3\n");
	howManyLines();
	printf("// Exercise 4\n");
	readFile();


	return 0;
}