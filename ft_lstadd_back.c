#include "ft_lst.h"
#include <stddef.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	new->next = NULL;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
