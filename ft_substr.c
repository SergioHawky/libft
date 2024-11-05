/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:27:12 by seilkiv           #+#    #+#             */
/*   Updated: 2024/11/05 15:51:19 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	n;

	n = 0;
	if (!s)
		return (NULL);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (*s && start > 0)
	{
		s++;
		start--;
	}
	while (*s && n < len)
	{
		p[n] = *s;
		s++;
		n++;
	}
	p[n] = '\0';
	return (p);
}

/*int	main(void)
{
	char *s = "ola mundo 123!";
	char *a = ft_substr(s, 5, 6);
	printf("%s\n", a);
	free(a);
	return (0);
}*/