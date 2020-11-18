/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 20:47:38 by edread            #+#    #+#             */
/*   Updated: 2020/10/31 14:59:30 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_new;
	unsigned char	*src_new;

	dest_new = (unsigned char*)dest;
	src_new = (unsigned char*)src;
	if (dest < src)
	{
		while (n-- > 0)
			*(dest_new++) = *(src_new++);
	}
	else if (dest > src)
	{
		while (n-- > 0)
			dest_new[n] = src_new[n];
	}
	return (dest);
}
