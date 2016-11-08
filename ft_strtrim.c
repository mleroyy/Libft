/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:13:20 by mleroy            #+#    #+#             */
/*   Updated: 2016/11/08 19:06:24 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_isfullblank(char const *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (void *)s;
	while (str[i])
	{
		if (str[i] > 32)
			return (0);
		i++;
	}
	return (1);
}

char			*ft_strtrim(char const *s)
{
	char	*trim;
	int		end;
	int		start;
	int		i;

	if (s == NULL)
		return (NULL);
	if (ft_isfullblank(s) == 1)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trim == NULL)
		return (NULL);
	while (start <= end)
		trim[i++] = s[start++];
	trim[i] = '\0';
	return (trim);
}
