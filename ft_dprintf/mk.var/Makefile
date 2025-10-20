DPF_OBJS_DIR = objs

DPF_PRINT_SRCS = ft_printchr.c ft_printhex.c ft_printnbr.c\
ft_printptr.c ft_printstr.c ft_printunbr.c

DPF_UTILS_SRCS = ft_count_digit_base.c ft_putnbr_fd.c\
ft_putnbr_hex.c ft_putunbr.c\
ft_putptr.c 

DPF_SRCS= ft_dprintf.c \
$(addprefix print/, $(DPF_PRINT_SRCS)) \
$(addprefix utils/, $(DPF_UTILS_SRCS))

DPF_OBJS = $(addprefix $(DPF_OBJS_DIR)/, $(notdir $(DPF_SRCS:.c=.o)))
