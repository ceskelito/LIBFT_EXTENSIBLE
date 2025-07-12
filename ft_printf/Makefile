NAME = libftprintf.a

CC		= cc
AR		= ar rcs
RM		= rm -f
MKDIR 	= mkdir -p

CFLAGS = -Wall -Wextra -Werror

OBJS_DIR = objs

PRINT_SRCS = ft_printchr.c ft_printhex.c ft_printnbr.c	\
			ft_printptr.c ft_printstr.c ft_printunbr.c

UTILS_SRCS = ft_count_digit_base.c ft_putnbr_fd.c	\
			ft_putnbr_hex.c ft_putunbr.c	\
			ft_putptr.c 

SRCS	= 	$(addprefix print/, $(PRINT_SRCS)) \
			$(addprefix utils/, $(UTILS_SRCS))

OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))

vpath %.c $(sort $(dir $(SRCS)))

$(OBJS_DIR)/%.o: %.c
	$(MKDIR) $(dir $@)
	$(CC) $(CFLAGS) -I. -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

objects: $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re