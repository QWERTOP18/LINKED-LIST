#include "ft_lst.h"

void	ft_lst_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*i;
	t_list	*j;
	void	*temp;

	if (!begin_list || !*begin_list)
		return ;
	i = *begin_list;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if ((*cmp)(i->data, j->data) > 0)
			{
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
			j = j->next;
		}
		i = i->next;
	}
}
