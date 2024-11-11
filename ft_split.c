/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:52:14 by seilkiv           #+#    #+#             */
/*   Updated: 2024/11/11 12:33:45 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **dest, size_t counter)
{
	while (counter-- > 0)
		free(dest[counter]);
	free(dest);
	return (NULL);
}

static int	count_words(const char *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			counter++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	int		counter;
	int		i;
	int		j;
	char	**dest;

	dest = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!dest)
		return (NULL);
	j = 0;
	counter = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			dest[counter] = malloc(sizeof(char) * (i - j + 1));
			if (!dest[counter])
				return (free_all(dest, counter));
			ft_strlcpy(dest[counter], &s[j], (i - j + 1));
			counter++;
		}
	}
	dest[counter] = NULL;
	return (dest);
}
