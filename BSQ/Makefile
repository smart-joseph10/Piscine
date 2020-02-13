CFLAGS = -Wall -Wextra -Werror

SRCDIR = scrs
INCDIR = includes
TARGET = BSQ
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $SRCS:.c=.o

all: $(TARGET)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -I $(INCDIR)

$(TARGET): $(OBJS)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(TARGET)

re: fclean all
