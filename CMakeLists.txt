cmake_minimum_required(VERSION 3.27)
project(hangman C)

set(CMAKE_C_STANDARD 17)

add_executable(hangman
        src/main.c
        src/gui/gui.c
        src/words_parser.c
        src/game_mechanics/Game.c)

target_link_libraries(hangman PRIVATE -lncurses)