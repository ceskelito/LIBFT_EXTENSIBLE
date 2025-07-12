NAME        = libft.a

CC          = cc
AR          = ar rcs
RM          = rm -f
MKDIR       = mkdir -p

CFLAGS      = -Wall -Werror -Wextra

SUBPROJECTS = ft_lib ft_printf get_next_line

OBJS = $(foreach dir, $(SUBPROJECTS), $(wildcard $(dir)/objs/*.o))

all: $(NAME)

$(NAME): $(OBJS) | $(SUBPROJECTS)
	@echo "==> Collecting objects and building $(NAME)"
	$(AR) $@ $(OBJS)

$(SUBPROJECTS):
	@$(MAKE) -C $@ objects

# "true" is used after the loop to ensure the command always succeeds, 
# preventing errors from the trailing '&&' after the last iteration.
clean:
	@$(foreach dir, $(SUBPROJECTS), $(MAKE) clean -C $(dir) &&) true

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re $(SUBPROJECTS)