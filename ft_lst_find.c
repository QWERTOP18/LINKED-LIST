#include "ft_lst.h"

t_list	*ft_lst_find(t_list *begin_list, void *data_ref, int (*cmp)(void *,
			void *))
{
	t_list	*current;

	current = begin_list;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
			return (current);
		current = current->next;
	}
	return (0);
}
