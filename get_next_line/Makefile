include ../common_variables.mk
include get_next_line.var.mk

OBJS_DIR	= GNL_OBJS_DIR
OBJ			= GNL_OBJS

vpath %.c .

$(OBJS_DIR)/%.o: %.c
	@$(MKDIR) $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $@ $^

all: $(NAME)

objects: $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re objects
