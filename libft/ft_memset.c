/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:15:21 by edread            #+#    #+#             */
/*   Updated: 2020/10/31 14:15:28 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t n)
{
	unsigned char *buf_new;

	buf_new = (unsigned char*)buf;
	while (n-- > 0)
		*(buf_new++) = c;
	return (buf);
}
