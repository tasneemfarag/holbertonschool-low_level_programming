CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
EXEC_FILE = cross
C_FILES = cross.c print_char_spaces.c
OBJECTS	:= $(C_FILES:.c=.o)

all: $(EXEC_FILE)

$(EXEC_FILE): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJECTS): $(C_FILES)

clean:
	-rm -f $(OBJECTS)
	-rm -f $(EXEC_FILE)

re: clean all
