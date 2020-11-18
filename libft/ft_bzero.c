/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:36:49 by edread            #+#    #+#             */
/*   Updated: 2020/10/28 20:56:57 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buf, size_t n)
{
	unsigned char *buf_new;

	buf_new = (unsigned char*)buf;
	while (n-- > 0)
		*(buf_new++) = 0;
}
