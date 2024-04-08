#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DELIM " ,."
#define MAX_WORDS 100

int wordExists(char* word, char* words[], int numWords){
    for(int i = 0; i < numWords; i++){
        if(strcmp(word, words[i]) == 0){
            return 1;
        }
    }
    return 0;
}

int main(){
	
	//Initializing a string.
    char* string = (char*)malloc(MAX_WORDS * sizeof(char));
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = 0;  // Remove trailing newline

	// Initializing a store string.
    char* words[MAX_WORDS];// Initializing an array of string, which is an array of 6 pointers. 
						   //Each pointer points to a string stored elsewhere in memory.
						   					   
    int numWords = 0;
    char* word = strtok(string, DELIM);// Split the string.
    while(word != NULL){
        if(!wordExists(word, words, numWords)){
            printf("%s ", word);
            words[numWords++] = word;
        }
        word = strtok(NULL, DELIM);
    }
	
    free(string);
    return 0;
}
