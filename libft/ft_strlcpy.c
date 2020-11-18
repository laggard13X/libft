/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:35:25 by edread            #+#    #+#             */
/*   Updated: 2020/11/01 19:20:22 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen((char *)src);
	if (!size)
		return (len);
	while (size-- > 1 && *src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (len);
}
