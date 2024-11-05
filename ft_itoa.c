/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:22:25 by seilkiv           #+#    #+#             */
/*   Updated: 2024/11/05 16:06:57 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	size_t	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		counter++;
	while (n != 0)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len_numb;

	len_numb = len(n);
	p = (char *)malloc((len_numb + 1) * sizeof(char));
	if (!p)
		return (NULL);
	p[len_numb] = '\0';
	if (n == -2147483648)
	{
		p[--len_numb] = '8';
		n /= 10;
	}
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		p[--len_numb] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}
/*int main()
{
	char *s = ft_itoa(10);
	printf("%s", s);
}*/