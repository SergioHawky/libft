/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:26:45 by seilkiv           #+#    #+#             */
/*   Updated: 2024/11/05 16:13:51 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = NULL;
	if (!s)
	{
		return ((char *)p);
	}
	while (*s)
	{
		if (*s == (char)c)
		{
			p = s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)p);
}

/*int	main(void)
{
	char *s = "Ol1a mundo123!";

	printf("%s\n", ft_strrchr(s, '1'));
	return (0);
}*/