/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:04:04 by edread            #+#    #+#             */
/*   Updated: 2020/11/05 20:07:06 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	while (haystack[j])
	{
		i = 0;
		while (needle[i] && j + i < len && needle[i] == haystack[j + i])
			i++;
		if (needle[i] == '\0')
			return ((char *)haystack + j);
		j++;
	}
	return (NULL);
}
