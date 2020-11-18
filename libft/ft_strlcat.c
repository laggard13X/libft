/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:24:06 by edread            #+#    #+#             */
/*   Updated: 2020/10/31 18:03:26 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			k;

	i = 0;
	k = 0;
	while (i < size && dest[i])
		i++;
	if (i == size)
		return (size + ft_strlen((char *)src));
	while (k < (size - i - 1) && src[k])
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (ft_strlen((char *)src) + i);
}
