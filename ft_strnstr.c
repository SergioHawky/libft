/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:26:36 by seilkiv           #+#    #+#             */
/*   Updated: 2024/11/05 15:48:23 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This function searches n bytes of the str for the string to find
//It returns a pointer to the found string or null if there wasn't 1

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			s2_len;
	size_t			i;

	if (*s2 == '\0')
		return ((char *)s1);
	s2_len = ft_strlen(s2);
	while (*s1 && len >= s2_len)
	{
		p1 = (unsigned char *)s1;
		p2 = (unsigned char *)s2;
		if (*p1 == *p2)
		{
			i = 0;
			while (i < s2_len && p1[i] == p2[i] && i < len)
				i++;
			if (i == s2_len)
				return ((char *)s1);
		}
		s1++;
		len--;
	}
	return (NULL);
}

/*int	main(void)
{
	char s1[40] = "ola mundo . 123 fixe";
	char s2[10] = "undo";
	char *result = ft_strnstr(s1, s2, 8);
	printf("%s\n", result);
}*/