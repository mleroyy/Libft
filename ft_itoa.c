/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:31:45 by mleroy            #+#    #+#             */
/*   Updated: 2016/11/07 14:09:13 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	int		i;
	int		nb;
	int		delta;

	if (n == -2147483648)
		return ("-2147483648");
	delta = (n < 0) ? 1 : 0;
	nb = (n < 0) ? -n : n;
	i = 0;
	size = 0;
	while (nb > 10)
	{
		nb /= 10;
		size++;
	}
	if ((nb >= 0) && (nb <= 9))
		size++;
	size += delta;
	nb = (n < 0) ? -n : n;
	str = (char *)malloc(sizeof(char) * (size));
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	size--;
	while (size > 0)
	{
		str[size] = (nb % 10) + 48;
		nb /= 10;
		size--;
	}
	str[size] = nb + 48;
	if (n < 0)
		str[0] = '-';
	return (str);
}
