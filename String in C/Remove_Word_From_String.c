#include <stdio.h>
#include <string.h>
#define delim ", ."

int Check_Word(char* token, char* word) {
    return strcmp(token, word) == 0;
    //strcmp(token, word) == 0 will be true if token and word are equal, and false otherwise.
	//Since Check_Word returns the result of this comparison, 
	//it will return 1 (true) if the strings are equal, and 0 (false) if they are not.
}

int main() {
    char string[100];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;  // Remove trailing newline

    char word[20];
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0;  // Remove trailing newline

    char* p = strtok(string, delim);

    while(p != NULL) {
        if(!Check_Word(p, word)) {
            printf("%s ", p); 
			// Print characters starting from the memory location the pointer points to, until it encounters a null character ('\0')
        }
        p = strtok(NULL, delim);
    }
	//char* p = "Hello, World!";
	//printf("%s\n", p); ----Prints "Hello, World!"------
	
    return 0;
}
