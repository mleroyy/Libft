/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:15:23 by mleroy            #+#    #+#             */
/*   Updated: 2016/11/07 14:16:49 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	character;
	char	*ptr;
	int		count;

	count = -1;
	character = c;
	ptr = (void *)s;
	while (*ptr != 0)
	{
		ptr++;
		count++;
	}
	while (count > 0)
	{
		if (*ptr == character)
			return (ptr);
		else
		{
			ptr--;
			count--;
		}
	}
	return (NULL);
}
