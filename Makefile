NAME =libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCSDIR = .
OBJDIR = .
INCLUDES = .

CFILES = \
	$(SRCSDIR)/ft_printf.c \
	$(SRCSDIR)/ft_putall.c

OFILES = $(CFILES:$(SRCSDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

$(OBJDIR)/%.o: $(SRCSDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
