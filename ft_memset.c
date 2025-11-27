/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:02:14 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/20 16:46:09 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset( void *c, int value, size_t n )
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)c)[i] = value;
		i ++;
	}
	return (c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	size_t n = 5;
// 	int value = 'c';
// 	char tab[n];

// 	ft_memset(tab, value, n);
// 	printf("%s", tab);
// 	return (0);

// }
