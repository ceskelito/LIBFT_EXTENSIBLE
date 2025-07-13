include ../common_variables.mk
include var.mk

NAME 		= libftlib.a

OBJS_DIR	= $(FTLIB_OBJS_DIR)
OBJS		= $(FTLIB_OBJS)

# Setting the sources path
vpath %.c $(sort $(dir $(FTLIB_SRCS)))

$(OBJS_DIR)/%.o: %.c
	$(MKDIR) $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

objects: $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all objects clean fclean re