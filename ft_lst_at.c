#include "ft_lst.h"

t_list	*ft_lst_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*current;

	i = 0;
	current = begin_list;
	while (current)
	{
		if (i == nbr)
			return (current);
		i++;
		current = current->next;
	}
	return (0);
}
