NAME = libgnl.a
OBJS_DIR = objs

CC = cc
AR = ar rcs
RM = rm -f
MKDIR = mkdir -p

CFLAGS = -Wall -Wextra -Werror

OBJ = $(OBJS_DIR)/get_next_line.o

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
