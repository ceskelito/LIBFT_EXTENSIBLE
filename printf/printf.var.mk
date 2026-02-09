TOP := $(dir $(lastword $(MAKEFILE_LIST)))

PF_OBJS_DIR = objs

PF_PRINT_SRCS = ft_printchr.c 	\
				ft_printhex.c 	\
				ft_printnbr.c	\
				ft_printptr.c 	\
				ft_printstr.c 	\
				ft_printunbr.c

PF_UTILS_SRCS = ft_count_digit_base.c 	\
				ft_putnbr_fd.c			\
				ft_putnbr_hex.c 		\
				ft_putunbr.c			\
				ft_putptr.c 

vpath %.c 	$(TOP)/print	\
			:$(TOP)/utils

PF_SRCS	= 	$(PF_PRINT_SRCS) \
			$(PF_UTILS_SRCS)

PF_OBJS = $(addprefix $(PF_OBJS_DIR)/, $(notdir $(PF_SRCS:.c=.o)))
