//
// Created by kubun on 03/02/24.
//

#include "string.h"
#include "stdio.h"
#include "words_parser.h"

typedef struct {
    char key[MAX_KEY_LENGTH];
    char value[MAX_VALUE_LENGTH];

} KeyValuePair;

void addKeyValuePair(struct KeyValuePair dictionary[], int *count, const char *key, const char *value) {
    if (*count < MAX_ENTRIES) {
        strcpy(dictionary[*count].key, key);
        strcpy(dictionary[*count].value, value);
        (*count)++;
    } else {
        printf("Dictionary full, cannot add more entries.\n");
    }
}

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

    for (size_t i = 0; i < strlen(line); ++i) {
        if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n'){
            isEmpty = 0;
            break;
        }
    }
    return isEmpty;
}

char **random_dic(char *file_line){
    char **dic;

    return dic;
}
