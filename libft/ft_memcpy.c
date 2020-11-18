/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:10:42 by edread            #+#    #+#             */
/*   Updated: 2020/10/31 14:59:32 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_new;
	unsigned char	*src_new;

	dest_new = (unsigned char*)dest;
	src_new = (unsigned char*)src;
	if (dest_new == NULL && src_new == NULL)
		return (dest);
	while (n-- > 0)
		*(dest_new++) = *(src_new++);
	return (dest);
}
