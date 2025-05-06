NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCSDIR_LIBFT = srcs/libft
SRCSDIR_PRINTF = srcs
OBJDIR = dest
INCLUDES = headers

CFILES = \
	$(SRCSDIR_LIBFT)/ft_atoi.c \
	$(SRCSDIR_LIBFT)/ft_bzero.c \
	$(SRCSDIR_LIBFT)/ft_calloc.c \
	$(SRCSDIR_LIBFT)/ft_isalnum.c \
	$(SRCSDIR_LIBFT)/ft_isalpha.c \
	$(SRCSDIR_LIBFT)/ft_isascii.c \
	$(SRCSDIR_LIBFT)/ft_isdigit.c \
	$(SRCSDIR_LIBFT)/ft_isprint.c \
	$(SRCSDIR_LIBFT)/ft_itoa.c \
	$(SRCSDIR_LIBFT)/ft_memchr.c \
	$(SRCSDIR_LIBFT)/ft_memcmp.c \
	$(SRCSDIR_LIBFT)/ft_memcpy.c \
	$(SRCSDIR_LIBFT)/ft_memmove.c \
	$(SRCSDIR_LIBFT)/ft_memset.c \
	$(SRCSDIR_LIBFT)/ft_putchar_fd.c \
	$(SRCSDIR_LIBFT)/ft_putendl_fd.c \
	$(SRCSDIR_LIBFT)/ft_putnbr_fd.c \
	$(SRCSDIR_LIBFT)/ft_putstr_fd.c \
	$(SRCSDIR_LIBFT)/ft_split.c \
	$(SRCSDIR_LIBFT)/ft_strdup.c \
	$(SRCSDIR_LIBFT)/ft_striteri.c \
	$(SRCSDIR_LIBFT)/ft_strjoin.c \
	$(SRCSDIR_LIBFT)/ft_strlcat.c \
	$(SRCSDIR_LIBFT)/ft_strlcpy.c \
	$(SRCSDIR_LIBFT)/ft_strlen.c \
	$(SRCSDIR_LIBFT)/ft_strmapi.c \
	$(SRCSDIR_LIBFT)/ft_strncmp.c \
	$(SRCSDIR_LIBFT)/ft_strnstr.c \
	$(SRCSDIR_LIBFT)/ft_strchr.c \
	$(SRCSDIR_LIBFT)/ft_strrchr.c \
	$(SRCSDIR_LIBFT)/ft_strtrim.c \
	$(SRCSDIR_LIBFT)/ft_substr.c \
	$(SRCSDIR_LIBFT)/ft_tolower.c \
	$(SRCSDIR_LIBFT)/ft_toupper.c \
	$(SRCSDIR_LIBFT)/ft_lstnew.c \
	$(SRCSDIR_LIBFT)/ft_lstadd_front.c \
	$(SRCSDIR_LIBFT)/ft_lstsize.c \
	$(SRCSDIR_LIBFT)/ft_lstlast.c \
	$(SRCSDIR_LIBFT)/ft_lstadd_back.c \
	$(SRCSDIR_LIBFT)/ft_lstdelone.c \
	$(SRCSDIR_LIBFT)/ft_lstclear.c \
	$(SRCSDIR_LIBFT)/ft_lstiter.c \
	$(SRCSDIR_LIBFT)/ft_lstmap.c \
	$(SRCSDIR_LIBFT)/ft_putchar.c \
	$(SRCSDIR_LIBFT)/ft_putstr.c \
	$(SRCSDIR_PRINTF)/ft_printf.c \
	$(SRCSDIR_PRINTF)/parsing.c \
	$(SRCSDIR_PRINTF)/ft_putall.c

OFILES = $(CFILES:srcs/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

$(OBJDIR)/%.o: srcs/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
