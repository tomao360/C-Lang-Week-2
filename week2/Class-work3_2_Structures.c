#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main_3_0_3()
{
	//Exercise 1
	struct WorkerData
	{
		char name[100];
		unsigned char age;
		unsigned int ID;
	};

	//Exercise 2
	struct WorkerData workersList[5];

	//Exercise 3
	for (int i = 0; i < 5; i++)
	{
		printf("Pleade enter the workers name, age and ID + ENTER\n");
		scanf("%s %d %d", workersList[i].name, &workersList[i].age, &workersList[i].ID);
	}

	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s %d %d\n", workersList[i].name, workersList[i].age, workersList[i].ID);
	}

	return 0;
}