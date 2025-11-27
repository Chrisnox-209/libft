/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:10:00 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/20 16:40:04 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *tab, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)tab)[i] = '\0';
		i++;
	}
	return (tab);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n = 5;
// 	char	tab[5] = "aaaa";
// 	//char tab[n];

// 	printf("%s", tab);
// 	ft_bzero(tab, n);
// 	printf("\n-----\n");
// 	printf("%s", tab);
// 	return (0);
// }