include common_variables.mk

include ft_lib/ft_lib.var.mk
include ft_printf/ft_printf.var.mk
include get_next_line/get_next_line.var.mk

NAME        = libft.a

SUBPROJECTS = ft_lib ft_printf get_next_line

OBJS = ft_lib/$(FTLIB_OBJS) ft_printf/$(PF_OBJS) get_next_line/$(GNL_OBJS)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "==> Collecting objects and building $(NAME)"
	$(AR) $@ $(OBJS)

$(OBJS): $(SUBPROJECTS)

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