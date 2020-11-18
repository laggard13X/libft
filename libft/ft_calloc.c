/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:31:22 by edread            #+#    #+#             */
/*   Updated: 2020/10/31 20:52:22 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *s;

	s = (unsigned char *)malloc(size * count);
	if (!s)
		return (NULL);
	ft_bzero(s, size * count);
	return ((void*)s);
}
