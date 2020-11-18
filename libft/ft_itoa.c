/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:20:02 by edread            #+#    #+#             */
/*   Updated: 2020/11/01 17:10:15 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		len(int n)
{
	int x;

	x = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n / 10 * (-1);
		x = 2;
	}
	while (n)
	{
		n = n / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		l;

	l = len(n);
	res = (char*)malloc(sizeof(char) * (l + 1));
	if (!res)
		return (NULL);
	res[l] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		while (l > 1)
		{
			res[l-- - 1] = (0 - n % 10) + 48;
			n = n / 10;
		}
	}
	else
		while (l > 0)
		{
			res[l-- - 1] = n % 10 + 48;
			n = n / 10;
		}
	return (res);
}
