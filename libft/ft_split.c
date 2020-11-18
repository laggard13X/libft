/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edread <edread@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:13:25 by edread            #+#    #+#             */
/*   Updated: 2020/11/15 13:09:45 by edread           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				word_count(char const *s, char c)
{
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	if (!*s)
		return (0);
	if ((char)s[0] == c)
		i++;
	while (s[i])
	{
		if ((char)s[i] == c && (char)s[i - 1] != c)
			n++;
		i++;
	}
	if ((char)s[i - 1] != c)
		n++;
	return (n);
}

t_start_end			*create_index_mas(char const *s, char c, size_t n)
{
	size_t				i;
	size_t				k;
	t_start_end			*index_mas;

	i = 0;
	k = 0;
	if (!(index_mas = (t_start_end *)malloc(sizeof(t_start_end) * (1 + n))))
		return (NULL);
	if (!s[i])
	{
		index_mas[0].start = 0;
		index_mas[0].end = 0;
	}
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		index_mas[k].start = i;
		while (s[i] && s[i] != c)
			i++;
		index_mas[k].end = i;
		k++;
	}
	return (index_mas);
}

char				**split_free(char **split)
{
	size_t l;

	l = 0;
	while (split[l])
		free(split[l++]);
	free(split);
	return (NULL);
}

char				**create_split(t_start_end *index_mas,
char const *s, size_t n)
{
	char		**split;
	size_t		i;
	size_t		l;
	size_t		k;

	i = 0;
	if (!(split = (char **)malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	split[n] = NULL;
	while (i < n)
	{
		l = index_mas[i].end - index_mas[i].start + 1;
		if (!(split[i] = (char *)malloc(sizeof(char) * l)))
			return (split_free(split));
		k = 0;
		while (index_mas[i].start < index_mas[i].end)
			split[i][k++] = s[index_mas[i].start++];
		split[i++][k] = '\0';
	}
	return (split);
}

char				**ft_split(char const *s, char c)
{
	char			**split;
	size_t			n;
	t_start_end		*index_mas;

	if (!s)
		return (NULL);
	n = word_count(s, c);
	index_mas = create_index_mas(s, c, n);
	if (!index_mas)
		return (NULL);
	split = create_split(index_mas, s, n);
	free(index_mas);
	if (!split)
		return (NULL);
	return (split);
}
