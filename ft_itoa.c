/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:31:55 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:46:41 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int			size;
	int			sign;
	long int	nbr;
	char		*str;

	sign = 0;
	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	size = ft_count(nbr);
	if (n < 0)
		size++;
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (nbr > 9)
	{
		str[size - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		size--;
	}
	str[size - 1] = nbr + '0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab;
// 	int		i;
// 	int		size;
// 	int		nb;

// //	nb = 123456789;
// 	nb = -2147483648;
// 	tab = ft_itoa(nb);
// 	printf("%s\n", tab);
// 	return (0);
// }
