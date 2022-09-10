#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main_3_0_1()
{
	//Exercise 1
	char* relativeFileName = "File.txt";
	FILE* f = fopen(relativeFileName, "w");

	if (f != NULL)
	{
		for (int i = 0; i < 10; i++)
		{
			fputc('*', f);
			fputc('\n', f);
		}
	}
	else
	{
		printf("ERROR");

	}

	fclose(f);

	//Exercise 2
	char* relativeFileName2 = "File2.txt";
	FILE* f2 = fopen(relativeFileName2, "w");

	if (f2 != NULL)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				fputc('A', f2);
			}

			fputc('\n', f2);
		}
	}
	else
	{
		printf("ERROR");

	}

	fclose(f2);

	//Exercise 3
	/*int numLines;
	printf("Please enter a number + ENTER\n");
	scanf("%d", &numLines);

	char* relativeFileName3 = "File3.txt";
	FILE* f3 = fopen(relativeFileName3, "w");

	if (f3 != NULL)
	{
		for (int i = 0; i < numLines; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				fputc('*', f3);
			}

			fputc('\n', f3);
		}
	}
	else
	{
		printf("ERROR");

	}

	fclose(f3);*/

	//Exercise 4
	char str[1000];
	printf("Please enter up to 1000 characters + ENTER\n");
	gets(str);

	int timesRepet;
	printf("Please enter a number + ENTER\n");
	scanf("%d", &timesRepet);

	char* relativeFileName4 = "File4.txt";
	FILE* f4 = fopen(relativeFileName4, "w");

	if (f4 != NULL)
	{
		for (int i = 0; i < timesRepet; i++)
		{
			for (int j = 0; j < strlen(str); j++)
			{
				fputc(str[j], f4);
			}
		}
	}
	else
	{
		printf("ERROR");

	}

	fclose(f4);



	return 0;
}