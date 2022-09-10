#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

struct Products
{
	char name[10];
	char symbol[2];
	char code[3];
};

void readFile2()
{
	FILE* f3 = fopen("productsList.txt", "r");
	char str[100] = "abc";
	struct Products productsList1[5];

	if (f3 != NULL)
	{
		for (int i = 0; i < 5; i++)
		{
			int counter = 1;
			while (str != NULL && counter <=3)
			{
				fgets(str, sizeof(str), f3); //reads only one line, until he gets to \n 
				if (counter == 1)
				{
					strcpy(productsList1[i].name, str);
				}
				else if (counter == 2)
				{
					strcpy(productsList1[i].symbol, str);
				}
				else
				{
					strcpy(productsList1[i].code, str);
				}

				counter++;
			}
		}
	}
	else
	{
		//error
	}

	fclose(f3);
}

int main_3_2()
{
	//Exercise 6
	struct Product
	{
		char name[10];
		char symbol[2];
		char code[3];
	};

	struct Product product1;
	strcpy(product1.name, "Bamba");
	strcpy(product1.symbol, "2");
	strcpy(product1.code, "13");

	FILE* f = fopen("product1.txt", "w");

	if (f != NULL)
	{
		fputs(product1.name, f);
		fputc('\n', f);
		fputs(product1.symbol, f);
		fputc('\n', f);
		fputs(product1.code, f);
	}
	else
	{
		printf("ERROR");

	}

	fclose(f);


	//Exercise 7
	

	struct Products productsList[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Please enter the product information: name, symbol and code  + ENTER\n");
		scanf("%s %s %s", productsList[i].name, productsList[i].symbol, productsList[i].code);
	}

	FILE* f2 = fopen("productsList.txt", "w");
	char str2[100];
	char* ptr2 = str2;

	if (f2 != NULL)
	{
		for (int i = 0; i < 5; i++)
		{
			sprintf(str2, "%s\n%s\n%s\n", productsList[i].name, productsList[i].symbol, productsList[i].code);
			fputs(ptr2, f);
		}
	}
	else
	{
		printf("ERROR read file");
	}

	fclose(f2);

	
	readFile2();

	return 0;

}
