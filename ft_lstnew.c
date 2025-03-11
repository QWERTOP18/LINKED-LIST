#include "ft_lst.h"
#include <stddef.h>
#include <stdlib.h>

t_list	*ft_lstnew(int type, void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->type = type;
	node->data = data;
	node->next = NULL;
	return (node);
}
