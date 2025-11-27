/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:48:50 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/25 10:49:34 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;

	i = 0;
	size_dest = 0;
	size_src = 0;
	while (src[size_src])
		size_src++;
	if (size == 0)
		return (size_src);
	while (dest[size_dest])
		size_dest++;
	while (size_dest + i < size - 1 && src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	if (size > size_dest)
	{
		dest[size_dest + i] = '\0';
		return (size_dest + size_src);
	}
	return (size_src + size);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	unsigned int size = 12;
// 	char source[9] = "Wolrd";
// 	char destination[22] = "Hello ";

// 	// strlcat(destination, source, size);
// 	printf("%zu", ft_strlcat(destination, source, size));
// 	printf("\n");
// 	printf("%s", destination);

// 	return (0);
// }