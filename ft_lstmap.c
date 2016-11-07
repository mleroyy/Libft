#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*p;
	t_list	*new;

	if (lst == NULL)
			return (NULL);
	if
	new = ft_lstnew(lst->content, lst->content_size);
	if (new == NULL)
			return (NULL)
	new = f(lst);
	lst = lst->next;
	p = new;
	p = p->next;
	while (p)
	{
		p = f(lst);
		p = p->next;
		lst = lst->next;
	}
	return (new);
}
