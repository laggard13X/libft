/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:31:05 by edread            #+#    #+#             */
/*   Updated: 2020/10/28 22:01:36 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_new;
	unsigned char	*src_new;
	size_t			i;

	dest_new = (unsigned char*)dest;
	src_new = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest_new[i] = src_new[i];
		if (src_new[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
