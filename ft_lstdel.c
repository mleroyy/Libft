#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*p;
	if (alst || del)
	{
		p = *alst;
		while (p != NULL)
		{
			del(p->content, p->content_size);
			free(p)
			p = p->next;
		}
		*alst = NULL;
	}

}
