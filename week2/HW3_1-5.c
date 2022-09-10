#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

//Exercise 3
void makeFiles(int num)
{
	char str[100];

	for (int i = 1; i <= num; i++)
	{
		sprintf(str, "File%d%s", i, ".txt"); // (כל פעם שהלולאה רצה הפקודה הזו יוצרת קובץ (מחרוזת זה גם פויינטר 
		FILE* f = fopen(str, "w"); //כל פעם שהלולאה רצה נפתח קובץ חדש 

		if (f != NULL)
		{
			for (int j = 0; j < num; j++)
			{
				fputc('*', f);
			}
		}
		else
		{
			printf("ERROR");

		}

		fclose(f);
	}
}

int main_3_1()
{
	//Exercise 1
	char* relativeFileName = "HW3_1.txt";
	FILE* f = fopen(relativeFileName, "w");

	if (f != NULL)
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				fputc('*', f);
			}

			fputc('\n', f);
		}
	}
	else
	{
		printf("ERROR");

	}

	fclose(f);


	//Exercise 2
	char* relativeFileName2 = "HW3_2.txt";
	FILE* f2 = fopen(relativeFileName2, "w");

	char str[5] = { '1', '2', '3', '4', 0 };

	if (f2 != NULL)
	{
		
		for (int i = 0; i <= 3; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				fputc(str[i], f2);
			}

			fputc('\n', f2);
		}
	}
	else
	{
		printf("ERROR");

	}

	fclose(f2);

	/* another option for Exercise 2
    char* relativeFileName2 = "HW3_2.txt";
	FILE* f2 = fopen(relativeFileName2, "w");

	if (f2 != NULL)
	{
		for (char i = '1'; i <= '4'; i++)
		{
			char num = i;
			for (int j = 0; j < 10; j++)
			{
				fputc(num, f2);
			}

			fputc('\n', f2);
		}
	}
	else
	{
		printf("ERROR");
	}

	fclose(f2); */


	//Exercise 3
	//makeFiles(4);

	//Exercise 4
	struct Car
	{
		char name[100];
		char model[10];
		int yearGettingOnTheRoad;
		unsigned int carNumber;
	};

	struct Car car1;
	strcpy(car1.name, "Hyundai");
	strcpy(car1.model, "i10");
	car1.yearGettingOnTheRoad = 2022;
	car1.carNumber = 23554897;
	printf("Car name:%s Model:%s Year of getting on the road:%d Car number:%d\n\n", car1.name, car1.model, car1.yearGettingOnTheRoad, car1.carNumber);

	//Exercise 5
	struct Car carList[5];

	for (int i = 0; i < 3; i++)
	{
		printf("Please enter the car information + ENTER\n");
		scanf("%s %s %d %d", carList[i].name, carList[i].model, &carList[i].yearGettingOnTheRoad, &carList[i].carNumber);
	}

	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %s %d %d\n\n", carList[i].name, carList[i].model, carList[i].yearGettingOnTheRoad, carList[i].carNumber);
	}

	return 0;
}