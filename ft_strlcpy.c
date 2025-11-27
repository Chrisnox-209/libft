/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:50:04 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/19 17:04:16 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	if (j == 0)
	{
		dest[0] = '\0';
		return (0);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	unsigned int size = 400;
// 	char source[6] = "hello";
// 	char destination[6] = "12345";

// 	ft_strlcpy(destination, source, size);
// 	printf("%zu", ft_strlcpy(destination, source, size));
// 	printf("\n");
// 	printf("%s", destination);

// 	return (0);
// }
