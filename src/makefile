CC = gcc

CFLAGS = -Wall -Wextra -Werror -std=c17

SRCS = main.c gui.c words_parser.c

OBJS = $(SRCS: .C = .O)

LIBS = -lncurses

TARGET = hangman

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)

