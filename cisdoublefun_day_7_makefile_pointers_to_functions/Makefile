CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
VPATH = src
SOURCE = src/0-absolute.c src/1-cap_string.c src/1-uppercase.c src/3-print_string.c src/2-square_root.c src/4-positive_or_not.c src/print_array.c src/4-string_to_integer.c src/print_char.c src/0-first_digit.c src/1-power.c src/4-reverse_string.c src/0-print_number.c src/0-lowercase.c src/4-strings_compare.c src/0-uppercase_string.c src/0-uppercase_string.c src/1-swap_int.c src/2-str_len.c src/4-positive_or_not.c
OBJECT=$(patsubst %.c, %.o, $(SOURCE))

all : libholbertonschool.a

libholbertonschool.a : $(OBJECT)
	ar rc libholbertonschool.a $(OBJECT)

%.o : src/%.c
	$(CC) $(CFLAGS) -c $<
re : 
	ar rc libholbertonschool.a $(OBJECT)

clean:
	 rm libholbertonschool.a
