#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*index;
	t_list	*save;

	index = *lst;
	while (index)
	{
		save = index->next;
		del(index->content);
		free(index);
		index = save;
	}
	*lst = 0;
}
