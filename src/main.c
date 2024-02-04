//
// Created by kubun on 29/01/24.
//

#include "stdlib.h"
#include "stdio.h"


#include "gui.h"
#include "words_parser.h"
#include <string.h>

char *strdup(const char *str);

int main(/*int argc, char ** argv*/){

    char line[1024];
    FILE *csv = fopen(CSV_FILE, "r");
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

    display();
    return 0;
}
