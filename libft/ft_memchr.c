/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:37:35 by edread            #+#    #+#             */
/*   Updated: 2020/10/31 15:03:52 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s_new;

	s_new = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*s_new == (unsigned char)c)
			return (s_new);
		s_new++;
	}
	return (NULL);
}
