/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:12:48 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/20 16:45:58 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char *tab = "Trouve la position de I dans cette chaine";
// 	int c = 'I';
// 	size_t len = 41;

// 	void *result = ft_memchr(tab, c, len);
// 	printf("le I est a la position %ld\n", (char *)result - tab);
// 	return (0);
// }
