#include <stdio.h>
#include <string.h>

char** tokenizer(char plaintext []) {
    char* tokens [] = {};
    char* word;

    int index;
    for (index = 0; ! plaintext[index]; index++) {
        if (plaintext[index] == "'") { 
            index++;
            while( plaintext[index] != "'") {
                if (plaintext[index] == "\\") {
                    word += plaintext[index + 1];
                    index++;
                }
                index++;
            }
        }
    }

    char** tokenList = tokens;
    return tokenList;
}

main() {
    char input[999];
    while (input != "kill\n") {
        printf(" -input- \n");
        fgets(input, 100, stdin);

        printf(" -output- \n");

        tokenizer(input);

        printf("%s", input);
    }
    
    printf(" Thanks for using DeviousYarn~! ");
}