/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:15:53 by edread            #+#    #+#             */
/*   Updated: 2020/10/31 20:32:22 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		n;
	char	*new;

	n = 0;
	while (src[n])
		n++;
	new = (char*)malloc(sizeof(*new) * (n + 1));
	if (new == NULL)
		return (0);
	n = 0;
	while (src[n])
	{
		new[n] = src[n];
		n++;
	}
	new[n] = '\0';
	return (new);
}
