FTSTD_OBJS_DIR = objs

FTSTD_IS 	= ft_isalnum.c ft_isalpha.c ft_isascii.c	\
		ft_isdigit.c ft_isprint.c ft_isspace.c

FTSTD_LST 	= ft_lstadd_back.c ft_lstclear.c ft_lstiter.c	\
		ft_lstmap.c ft_lstsize.c ft_lstadd_front.c		\
		ft_lstdelone.c ft_lstlast.c ft_lstnew.c

FTSTD_MEM 	= ft_bzero.c ft_memchr.c ft_memcpy.c	\
		ft_memset.c ft_calloc.c ft_memcmp.c		\
		ft_memmove.c ft_realloc.c
		
FTSTD_PUT 	= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c
		
FTSTD_STR 	= ft_putstr_fd.c ft_strdup.c ft_strlcat.c 	\
		ft_strmapi.c ft_strrchr.c ft_split.c 		\
		ft_striteri.c ft_strlcpy.c ft_strncmp.c 	\
		ft_strtrim.c ft_strchr.c ft_strjoin.c 		\
		ft_strlen.c ft_strnstr.c ft_substr.c		\
		ft_strcmp.c ft_strjoin_multi.c ft_split_func.c

FTSTD_TO 	= ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c ft_atol.c

FTSTD_SRCS	= $(addprefix ft_is/, $(FTSTD_IS)) $(addprefix ft_lst/, $(FTSTD_LST)) \
		$(addprefix ft_mem/, $(FTSTD_MEM)) $(addprefix ft_put/, $(FTSTD_PUT)) \
		$(addprefix ft_str/, $(FTSTD_STR)) $(addprefix ft_to/, $(FTSTD_TO))

FTSTD_OBJS = $(addprefix $(FTSTD_OBJS_DIR)/, $(notdir $(FTSTD_SRCS:.c=.o)))
