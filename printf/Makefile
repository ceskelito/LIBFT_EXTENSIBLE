include printf.var.mk

NAME = libft_xprintf.a

AR = ar -rcs

PRINTF_PROJECTS = ft_printf \
                  ft_dprintf \
                  ft_sprintf

all: $(NAME)

$(NAME): $(PRINTF_PROJECTS)
	$(AR) $(TOP)/$@/$@lib.a

$(PRINTF_PROJECTS):
	$(MAKE) -C $@

.PHONY: all $(PRINTF_PROJECTS)
