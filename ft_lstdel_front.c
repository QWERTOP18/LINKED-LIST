#include "ft_lst.h"
#include <stdlib.h>

void	ft_lstdel_front(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || *lst == NULL)
		return ;
	temp = *lst;
	*lst = (*lst)->next;
	if (del)
		del(temp->data);
	free(temp);
}
