NAME 		= libft.a
CC 		= cc
AR 		= ar rcs
CFLAGS 		= -Wall -Werror -Wextra
RM 		= rm -f
MKDIR 		= mkdir -p
OBJS_DIR 	= objs

FT_IS 	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
		
FT_LST 	= ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstsize.c \
		ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c
		
FT_MEM 	= ft_bzero.c ft_memchr.c ft_memcpy.c ft_memset.c ft_calloc.c ft_memcmp.c \
		ft_memmove.c
		
FT_PUT 	= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c
		
FT_STR 	= ft_putstr_fd.c ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c \
		ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c \
		ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c

FT_TO 	= ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c

FT_LIB 	= $(addprefix ft_is/, $(FT_IS)) $(addprefix ft_lst/, $(FT_LST)) \
		$(addprefix ft_mem/, $(FT_MEM)) $(addprefix ft_put/, $(FT_PUT)) \
		$(addprefix ft_str/, $(FT_STR)) $(addprefix ft_to/, $(FT_TO))

PF_PRINT	= ft_printchr.c ft_printhex.c ft_printnbr.c ft_printptr.c ft_printstr.c ft_printunbr.c

PF_UTILS	= ft_count_digit_base.c ft_putnbr_fd.c ft_putnbr_hex.c ft_putptr.c ft_putunbr.c

PF_SOURCE	= ft_printf.c

PRINTF 		= $(addprefix print/, $(PF_PRINT)) $(addprefix utils/, $(PF_UTILS)) \
		$(addprefix source/, $(PF_SOURCE))

GET_NEXT_LINE = get_next_line/get_next_line.c

SOURCES = $(addprefix ft_lib/, $(FT_LIB)) $(addprefix ft_printf/, $(PRINTF)) $(GET_NEXT_LINE)

OBJECTS = $(addprefix $(OBJS_DIR)/, $(SOURCES:.c=.o))

$(OBJS_DIR)/%.o: %.c
	@$(MKDIR) $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "creating obj %-33.33s\r" $@

$(NAME): $(OBJECTS)
	$(AR) $@ $^

all: $(NAME)

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 
