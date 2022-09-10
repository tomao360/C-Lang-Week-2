#include <stdio.h>
#pragma warning(disable: 4996)

int main_1()
{
	char num = 0b00000001; //יצירת משתנה עם מספרים בינאריים
	char num2 = num << 1; // << shift the bit 1 step left. >> shift the bit to right.
	printf("%d", num2);

	// num << 1; => not good, needs lvalue

	char num1 = 0b00000001;
	num1 = num1 << 1; //will overflow after bit 8 and return \0
	num1 = num1 << 1;
	num1 = num1 << 1;
	num1 = num1 << 1;
	num1 = num1 << 1;
	num1 = num1 << 1;
	num1 = num1 << 1;
	num1 = num1 << 1;
	num1 = num1 << 1;

	num = -1; //because the number is negative the shifting will return 1 
	num = num >> 1; 
	num = num >> 1;
	num = num >> 1;
	num = num >> 1;
	num = num >> 1;
	printf("%d", num);

	
	//תרגיל - איפוס המספר ע"י שימוש בהזזת ביטים 
	int a = 200;
	a = a << 31;
	a = a << 1;

	//פעולות לוגיות שפועלות על ביטים
	char b =             0b00000011;
	char c =             0b00000110;
	char d = b & c; //     00000010
	d = b | c;      //     00000111
	d = b ^ c; //XOR       


	int x = 0b01110101;
	x = x ^ x; // x = 0 when you are doing XOR to the same number the number will return 0 (will reset)


	return 0;
}