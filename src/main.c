//
// Created by kubun on 29/01/24.
//

#include "stdlib.h"
#include "stdio.h"


#include "gui/gui.h"
#include "words_parser.h"
#include <string.h>

// has to declare it, because it's not recognize by compiler
char *strdup(const char *str);

// TODO: launch() must start program depending on args
//
// if args -> launch program with intended parameters
// if no args -> games must choose a random word for player
//
// void launch();

int main(/*int argc, char ** argv*/){

    display();

    char line[1024];
    FILE *csv = fopen(TXT_FILE, "r");
    if (csv == NULL){
        perror("Error opening file");
    }

    while (fgets(line, 1024, csv)){
        if (strstr(line, "#") != NULL || isEmpty(line)) {
            continue; // Skip the line
        }

        char *tmp = strdup(line);
        char* res = parser(tmp, 3);

        printf("Chien : %s\n", tmp);
        printf("La difficulté est%s\n\n", res);


        free(tmp);
    }


    return 0;
}
