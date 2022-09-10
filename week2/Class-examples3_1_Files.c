#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main_3()
{
	char* fileName = "c:\\a\\data.txt";
	//זה ומה שמטה בעצם עושים את אותו הדבר
	char* str = malloc(100);
	strcpy(str, "c:\\a\\data.txt");



	//r - open for reading 
	//w - open for writing (override over existed data)
	//a - open for append to the end of the file

	char* relativeFileName = "data.txt"; //will open relative file in your program (will be in the Debug file)
	FILE* f = fopen("relativeFileName", "w");
	
	if (f != NULL)
	{
		fputc('1', f); //פקןדה לכתיבה לקובץ
		fputc('2', f);
		fputc('3', f);
	}
	else
	{
		// error
	}
	
	fclose(f); 


	return 0;
}