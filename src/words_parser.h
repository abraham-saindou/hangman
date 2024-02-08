//
// Created by kubun on 03/02/24.
//

#include "stdbool.h"

#ifndef HANGMAN_WORDS_PARSER_H
#define HANGMAN_WORDS_PARSER_H

#define MAX_ENTRIES 200
#define MAX_KEY_LENGTH 100
#define MAX_VALUE_LENGTH 100
#define TXT_FILE "../words.txt"


char* parser(char *line, int num);
bool isEmpty(char *line); // checks if line is empty


// TODO: built those function
// has_category() and has_difficulty() must checks category and difficulty if false,
// it must discard a word and show error and num line.
//
// If there's no valid word, display error and closed program.
//
// Errors will be displayed in a new terminal window or tab.


void has_category(); // checks categorie if not ignore word and show error
void has_difficulty(); // checks difficulty if not ignore word and show error


#endif //HANGMAN_WORDS_PARSER_H
