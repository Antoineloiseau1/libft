#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;

	if (!lst || !f || !del)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	while (lst)
	{
		f(lst->content);
		new = lst;
		del(lst->content);
		lst = lst->next;
	}
	free(lst);
	new->next = NULL;

	return (new);
}


	
	
