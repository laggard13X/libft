/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:02:31 by edread            #+#    #+#             */
/*   Updated: 2020/11/13 15:47:20 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	size_t			len_s;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen((char *)s);
	if (start >= len_s)
	{
		if (!(substr = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	substr = (char*)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len && i + start < len_s)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
