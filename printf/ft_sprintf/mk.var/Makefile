SPF_OBJS_DIR = objs

SPF_PRINT_SRCS = ft_printchr.c ft_printhex.c ft_printnbr.c	\
			ft_printptr.c ft_printstr.c ft_printunbr.c

SPF_UTILS_SRCS = ft_count_digit_base.c ft_putnbr_fd.c	\
			ft_putnbr_hex.c ft_putunbr.c	\
			ft_putptr.c 

SPF_SRCS	= 	ft_sprintf.c \
			$(addprefix print/, $(SPF_PRINT_SRCS)) \
			$(addprefix utils/, $(SPF_UTILS_SRCS))

SPF_OBJS = $(addprefix $(SPF_OBJS_DIR)/, $(notdir $(SPF_SRCS:.c=.o)))