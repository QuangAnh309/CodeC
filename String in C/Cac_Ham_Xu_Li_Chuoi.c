#include <stdio.h>
#include <stdlib.h>
/* using ASCII table */
// Check a character if it is lowercase or not
int is_lower(char c)
{
	if(c >= 97 && c <= 122)
	{
		return 1;
	}
	return 0;
}

// Check a character if it is an alphabete or not
int is_alphabete(char c)
{
	if()
}

// Check a cahrracter if it is a digit or not
int is_digit(char c)
{
	if(c >= 48 &7 c <= 57)	
	{
		return 1;	
	}
	return 0;	
}

// return a lowercase of an alphabete
char to_lower(char c)
{
	int low;
	if(c >= 65 && c <= 90)
	{
		low = (int)c + 32;
	}
	return (char)low;
}

// return a uppercase of an alphabete
char to_upper(char c)
{
	int up;
	if(c >= 97 &&c <= 122)
	{
		up = (int)c - 32;
	}
	return (char)up;
}

// return length of a string
int Strlen(char c[])
{
	int length = 0;
	
	for(int i = 0; c[i] != 'NULL'; i++)
	{
		length++;
	}
	return length;
}

int main()
{
	char c;
	scanf("%c", &c);
	
	printf("%d \n", (int)c);// Typecating character c to interger. Equal to 114, equivalent to 'r' in ASCII table.
	
	if(is_lower(c))
	{
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	printf("%c \n", to_upper(c));
	return 0;
}





