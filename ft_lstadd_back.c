#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*index;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	index = *lst;
	while (index->next)
		index = index->next;
	index->next = new;
}
