//
// Created by kubun on 03/02/24.
//

#include "string.h"
#include "stdio.h"
#include "words_parser.h"

char* parser(char *line, int num){
        char *tok;
        for (tok = strtok(line, ",");
             tok && *tok;
             tok = strtok(NULL, ",\n"))
        {
            if (!--num)
                return tok;
        }
        return NULL;
}

bool isEmpty(char *line){
    int isEmpty = 1;

    for (int i = 0; i < strlen(line); ++i) {
        if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n'){
            isEmpty = 0;
            break;
        }
    }
    return isEmpty;
}


