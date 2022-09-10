#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main_2()
{
	//malloc
	int a = 90;
	int c = 88;
	int* b = &a;
	printf("%x\n", b); //print the address
	printf("%d", *b); //print the value

	a = 100;
	printf("%x\n", b);
	printf("%d\n", *b);

	b = &c;

	b = malloc(10 * sizeof(int)); //מתנתק C הקשר עם // malloc is a function that allocates space in memory
	*b = 100; //enter this value to the first int
	int* original = b; //gets the address of b
	b++; // advances in int (4 bytes) because its a pointer from type int
	*b = 200;
	b--;
	free(original); //מאפס את הזיכרון



	//קבצים טקסטואליים
	FILE* f;
	f = fopen("c:\\haim\\data.txt", "r");

	if (f == NULL)
	{
		// problem
		// ERROR message - the file is empty
	}
	else
	{
		char ch = fgetc(f); //gives you a character
		while (ch != EOF) // while is not END OF FILE
		{
			ch = fgetc(f); 
			printf("%c", ch); //will print all the characters
		}

		fclose(f); // close the file
	}


	return 0;
}