
NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c\
ft_split.c ft_itoa.c ft_striteri.c ft_putnbr_fd.c ft_strtrim.c ft_strmapi.c

OBJETS = $(SOURCES:.c=.o)

SOURCES_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJETS_BONUS = $(SOURCES_BONUS:.c=.o)

BONUS = .bonus

MAMDATORY = .mandatory

all: $(NAME)

$(NAME): $(OBJETS)
	ar rcs $(NAME) $(OBJETS)
	@touch $(MAMDATORY)
	@rm -f $(BONUS) 
	
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@	
clean:
	rm -f $(OBJETS) $(OBJETS_BONUS)
	rm -f $(MAMDATORY) $(BONUS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS)

$(BONUS): $(OBJETS) $(OBJETS_BONUS)
	ar rcs $(NAME) $(OBJETS) $(OBJETS_BONUS)
	@touch $(BONUS)
	@rm -f $(MAMDATORY)

test:
	@echo "Running test..."
	@$(CC) $(CFLAGS) $(SOURCES) $(SOURCES_BONUS) -o $@
	./$@

.PHONY: all clean fclean re bonus test
