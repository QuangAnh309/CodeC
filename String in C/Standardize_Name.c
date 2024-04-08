#include <stdio.h>
#include <string.h>

//Declare ctype.h to use isspace() and isalpha()
#include <ctype.h>
#define DELIM " ,."

void standardize(char* string){
    int len = strlen(string);
    int j = 0;
    for (int i = 0; i < len; i++){
        // Skip multiple spaces
        if (isspace((unsigned char)string[i]) && isspace((unsigned char)string[i+1])){
            continue;
        }
        // If the character is the first character of a word
        if(i == 0 || isspace((unsigned char)string[i-1])){
            string[j++] = toupper((unsigned char)string[i]);
        } else {
            string[j++] = tolower((unsigned char)string[i]);
        }
    }
    string[j] = '\0';  // Terminate the string
}

int main(){
    // Initializing a name that need standardized;
    char name[100];
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = 0;  // Remove trailing newline

    standardize(name);
    printf("%s\n", name);

    return 0;
}
