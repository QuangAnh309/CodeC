#include<stdio.h>
#include<string.h> // Declare a function processing string in C

#define SEPARATOR ". ,"
// Define function using for preprocessor before RUN your code.
// Define function will replace all of things you define in your program by value you defined.
// Structure: #define < INDENTIFIER > < REPLACEMENT >
// For example: #define PI 3.14   #define SQUARE(x) ((x) * (x))


int main(){
	int n;
	int test_case;
	scanf("%d", &test_case);
	int count = 0;
	// Call a function that take ENTER from keyboard when finish inputing test_case from user
	// You can also use scanf("/n")
	getchar();
	
	// Declare a characters array with 200 elements maximum.
	char string[200];
	
	// Take input string from user using fgets function ( Use can using gets() function ).
	fgets(string , 200 , stdin);
	
	char* p = strtok(string, SEPARATOR);// The first time you call strtok, you need to pass the string to be split as the first argument.
	// strtok() function return a pointers. The function splits a string into tokens based on a delimiter.
	// the tokens split does not contain delimiter.
	// For example: you have a string " Hello, World! " with delimiter is (,). After using strtok() you will have 2 token "Hello" and "World!"
	// Syntax : char* strtok(char* str, const char *delim).
	// str is string to be split, delim is delimiter characters.
	// The function returns a pointers to the FIRST token found in the string and store next tokens (If there's are), or NULL if there are no tokens.
	while(test_case--)
	{
		while(p != NULL)
		{
			count++;
			p = strtok(NULL, SEPARATOR);// to get the next tokens, you need to call the strtok() again with the first argument is NULL. This tells the function to continue from where it left off,
		}
		printf("%d\n", count);
	}
	
	// String copy Function in C: strcpy()
	// This function allows you copy a string into anather string, include the null terminator.
	// This function contains 2 arguments: First is a string that stores the string need to be copied.
	char store[100];
	char copied[100] = "Quang Anh Handsome";
	strcpy(store, copied);
	printf("String need to be copied: %s\n", copied);
    printf("String stores string copied: %s\n", store);
    
    return 0;
}

