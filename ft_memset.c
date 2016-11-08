/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:32:39 by mleroy            #+#    #+#             */
/*   Updated: 2016/11/07 14:10:04 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	s = b;
	if (b == NULL)
		return (NULL);
	while (len > 0)
	{
		*s = c;
		s++;
		len--;
	}
	return (b);
}
