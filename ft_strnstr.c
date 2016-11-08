/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:00:18 by mleroy            #+#    #+#             */
/*   Updated: 2016/11/08 19:47:34 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int		i;
	unsigned int		j;
	char				*res;

	i = 0;
	j = 0;
	if (!big || !little)
		return (NULL);
	res = (void *)big;
	if (little[0] == 0)
		return (res);
	while (res[i] && (i < len))
	{
		while (res[i + j] == little[j])
		{
			if ((res[i + j] == little[j]) && little[j + 1] == '\0')
				return (res + i);
			else
				j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
