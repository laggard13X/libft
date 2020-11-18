/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:18:27 by edread            #+#    #+#             */
/*   Updated: 2020/10/28 21:18:48 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		n;
	int		sign;
	int		res;

	n = 0;
	sign = 1;
	res = 0;
	while (str[n] == ' ' || (str[n] > 8 && str[n] < 14))
		n++;
	if (str[n] == 43 || str[n] == 45)
	{
		if (str[n] == 45)
			sign = -sign;
		n++;
	}
	while (str[n] > 47 && str[n] < 58)
	{
		if (res * 10 < res)
			return ((sign < 0) ? 0 : -1);
		res = res * 10 + (str[n++] - 48);
	}
	return (res * sign);
}
