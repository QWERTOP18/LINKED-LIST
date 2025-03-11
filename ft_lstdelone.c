#include "ft_lst.h"
#include <stddef.h>
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->data);
		free(lst);
	}
}
