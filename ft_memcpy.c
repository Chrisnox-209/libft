/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:31:04 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/20 18:04:02 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!(unsigned char *)dest && !(unsigned char *)src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	size_t n = 10;

// 	char *tab = "hello";
// 	char dest[n];

// 	ft_memcpy(dest, tab, n);
// //	ft_memcpy(((void*)0), ((void*)0), 3);

// 	printf("%s \n", dest);
// 	return (0);
// }