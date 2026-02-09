include ../../mk.var.local/Makefile
include ../printf.var.mk

NAME = libftprintf.a

SRCS 		= ft_printf.c

SHARED_SRCS	= $(PF_PRINT_SRCS) 	\
			$(PF_UTILS_SRCS)

OBJS_DIR 		= objs
SHARED_OBJS_DIR = $(TOP)/objs

OBJS 		= $(addprefix $(OBJS_DIR)/, 		$(SRCS:.c=.o))
SHARED_OBJS = $(addprefix $(SHARED_OBJS_DIR)/,	$(SHARED_SRCS:.c=.o))

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
