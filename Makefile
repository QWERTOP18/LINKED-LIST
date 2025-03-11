SRCS = $(shell find . -name "*.c")

NAME = list.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP
RM = rm -f
AR = ar rc

OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/,$(SRCS:.c=.o))
DEPS = $(addprefix $(CACHEDIR)/,$(SRC:.c=.d))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

func: $(NAME)
	nm -u $(NAME) | sort | uniq | grep -v ft_

$(OBJDIR)/%.o: %.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -MF $(OBJDIR)/$*.d -o $@ -c $<

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re func
