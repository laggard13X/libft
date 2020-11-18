/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:00:50 by edread            #+#    #+#             */
/*   Updated: 2020/10/31 17:16:54 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_new;
	unsigned char	*s2_new;

	s1_new = (unsigned char*)s1;
	s2_new = (unsigned char*)s2;
	while (n-- > 0)
	{
		if (*s1_new == *s2_new)
		{
			s1_new++;
			s2_new++;
		}
		else
			return (*s1_new - *s2_new);
	}
	return (0);
}
