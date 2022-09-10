#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main_3_0_2()
{
	struct Item
	{
		int price;
		char name[100];
		char color[100];
	};

	struct Item item1; //creating a variable type struct Item 
	struct Item item2;

	// הכנסה הארדקוד
	item1.price = 10;
	strcpy(item1.name, "Cola");
	strcpy(item1.color, "Black");

	item2.price = 10;
	strcpy(item2.name, "Pepsi");
	strcpy(item2.color, "Black");

	printf("Item:%s Price:%d color:%s", item1.name, item1.price, item1.color);
	printf("Item:%s Price:%d color:%s", item2.name, item2.price, item2.color);

	// another option for using structures
	struct Item itemList[3];

	for (int i = 0; i < 3; i++)
	{

		scanf("%s %s %d", itemList[i].name, itemList[i].color, &itemList[i].price);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%s %s %d\n", itemList[i].name, itemList[i].color, itemList[i].price);
	}

	//קבצים בינאריים
	FILE* f = fopen("ItemsList.dat", "w");

	//כתיבת קובץ בינארי
	if (f != NULL)
	{
		fwrite(&item1, sizeof(struct Item), 1, f);
		fwrite(&item2, sizeof(struct Item), 1, f);

		fclose(f);

		//קריאת קובץ בינארי
		struct Item ItemToRead;
		f = fopen("ItemsList.dat", "r");
		if (f != NULL)
		{
			//how many structers read
			int alreadyRead = fread(&ItemToRead, sizeof(struct Item), 1, f);
			while (alreadyRead != 0)
			{
				alreadyRead = fread(&ItemToRead, sizeof(struct Item), 1, f);
			}

			fclose(f);
		}
		else
		{
			//error
		}
	}
	else
	{
		//error
	}

	

    return 0;
}