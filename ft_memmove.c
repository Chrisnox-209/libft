/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:14:02 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/20 18:11:10 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!(unsigned char *)dest && !(unsigned char *)src)
		return (NULL);
	if ((unsigned char *)dest < (unsigned char *)src
		|| (unsigned char *)dest >= (unsigned char *)src + n)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	size_t n = 3;

// 	char *src = "world";
// 	char dest[11] = "hello ";

// 	ft_memmove(dest, src, n);
// 	ft_memmove(((void*)0), ((void*)0), 5);

// 	printf("%s \n", dest);
// return (0);
// }
