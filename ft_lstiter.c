#include "libft.h"
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*p;

	if (lst)
	{
		p = lst;
		while (p != NULL)
		{
			f(p)
			p = p->next;
		}
	}
}
