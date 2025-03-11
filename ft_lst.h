#ifndef FT_LST_H
# define FT_LST_H

# include <stddef.h>

/* ************************************************************************** */
/*                                 STRUCTURE                                  */
/* ************************************************************************** */

typedef struct s_list
{
	int				type;
	struct s_list	*next;
	void			*data;
}					t_list;

/* ************************************************************************** */
/*                                FUNCTIONS                                   */
/* ************************************************************************** */

/* ---------------------------- List Operations ---------------------------- */

t_list				*ft_lst_at(t_list *begin_list, unsigned int nbr);
t_list				*ft_lst_find(t_list *begin_list, void *data_ref,
						int (*cmp)(void *, void *));
t_list				*ft_lst_from_strs(char **strs);
t_list				*ft_lstlast(t_list *begin_list);
t_list				*ft_lstnew(int type, void *content);
int					ft_lstsize(t_list *lst);

/* ---------------------------- List Modifiers ----------------------------- */

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdel_front(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstmerge(t_list **begin_list1, t_list *begin_list2);
void				ft_lstremove_if(t_list **begin_list, void *data_ref,
						int (*cmp)(void *, void *), void (*free_fct)(void *));
void				ft_lstreverse(t_list **begin_list);
void				ft_lstsort(t_list **begin_list, int (*cmp)(void *, void *));
void				ft_sorted_list_insert(t_list **begin_list, int type,
						void *data, int (*cmp)(void *, void *));

/* ---------------------------- Iterators & Maps ---------------------------- */

void				ft_lst_foreach(t_list *begin_list, void (*f)(void *));
void				ft_lst_foreach_if(t_list *begin_list, void (*f)(void *),
						void *data_ref, int (*cmp)(void *, void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/* ----------------------------- Conversion ----------------------------- */

char				**ft_list_to_strs(t_list *lst);

#endif
