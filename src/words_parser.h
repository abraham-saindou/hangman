//
// Created by kubun on 03/02/24.
//

#include "stdbool.h"

#ifndef HANGMAN_WORDS_PARSER_H
#define HANGMAN_WORDS_PARSER_H
#define CSV_FILE "../words.csv"


char* parser(char *line, int num);
bool isEmpty(char *line);


#endif //HANGMAN_WORDS_PARSER_H
