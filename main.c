#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void helpHandler();

// processes commands input and calls relevant function
void processCommands (const char *commandStr) {
    if(commandStr == NULL) {
        printf("Invalid command %s", commandStr);
        return;
    }
    if(strcmp(commandStr, "help") == 0) {
        helpHandler();
        return;
    }
    printf("Invalid command %s\n", commandStr);
}

void helpHandler() {
    printf("This is a help function handler. Will display all the commands\n");
}

int main() {

    printf("Starting c_diary.\n");
    printf("c_diary started successfully\n");

    char *pCommand;
    pCommand = malloc(200 * sizeof(char));
    while (1 == 1){
        printf("Please enter your command\n");
        gets(pCommand);
        processCommands(pCommand);
    }

    return 0;
}
