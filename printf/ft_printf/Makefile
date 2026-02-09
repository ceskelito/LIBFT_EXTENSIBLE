include ../../mk.var.local/Makefile
include ../printf.var.mk

NAME = libftprintf.a

OBJS_DIR = objs

SRCS	= 	ft_printf.c \
			$(PF_SRCS)

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

vpath %.c $(sort $(dir $(SRCS)))

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -I. -c $< -o $@
	@printf "$(GREEN)Compiling $(BLUE)$<$(RESET)\n"

$(OBJS_DIR):
	$(MKDIR) $(OBJS_DIR)

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

objects: $(OBJS)

clean:
	@$(RM) $(OBJS)
	@printf "$(RED)Cleaning objects of $(BLUE)$(NAME)$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@$(RM) -r $(OBJS_DIR)
	@printf "$(RED)Deliting $(BLUE)$(NAME)$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
