include ../common_variables.mk
include ft_printf.var.mk

NAME = libftprintf.a

OBJS_DIR = $(PF_OBJS_DIR)

SRCS	= 	$(addprefix print/, $(PF_PRINT_SRCS)) \
			$(addprefix utils/, $(PF_UTILS_SRCS))

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