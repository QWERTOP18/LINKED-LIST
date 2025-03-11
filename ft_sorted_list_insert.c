#include "ft_lst.h"

void	ft_sorted_list_insert(t_list **begin_list, int type, void *data,
		int (*cmp)(void *, void *))
{
	t_list	*current;
	t_list	*prev;
	t_list	*new;

	new = ft_lstnew(type, data);
	if (!new)
		return ;
	if (!*begin_list || (*cmp)((*begin_list)->data, data) > 0)
	{
		new->next = *begin_list;
		*begin_list = new;
		return ;
	}
	prev = 0;
	current = *begin_list;
	while (current && (*cmp)(current->data, data) <= 0)
	{
		prev = current;
		current = current->next;
	}
	prev->next = new;
	new->next = current;
}
