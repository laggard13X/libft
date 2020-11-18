/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:10:26 by edread            #+#    #+#             */
/*   Updated: 2020/11/01 09:40:04 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		if_include_set(char const c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	end = 0;
	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (NULL);
	while (s1[end])
		end++;
	start = 0;
	while (s1[start] && if_include_set(s1[start], set))
	{
		start++;
	}
	while (end > 0 && if_include_set(s1[end - 1], set))
	{
		end--;
	}
	return (ft_substr(s1, start, end - start));
}
