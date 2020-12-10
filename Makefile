NAME = libasm.a

SRCS =	ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s \
		ft_read.s ft_strdup.s

OBJS = $(SRCS:.s=.o)

LIB = -L -lasm

%.o	: %.s
	nasm -f macho64 $< -o $@

$(flags): -Wall -Werror -Wextra

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS) *.out

run:
	gcc $(flags) main.c libasm.a $(LIB); ./a.out

fclean: clean
	rm -f $(NAME)

re: fclean all