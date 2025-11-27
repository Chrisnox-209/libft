/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 02:49:22 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:39:53 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size_len;
	size_t	i;
	char	*sub;

	size_len = ft_strlen(s);
	if (start >= size_len || len == 0)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > size_len - start)
		len = size_len - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = -1;
	while (++i < len)
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab;
// 	char	*sortie;

// 	tab = "\t\t\t\thello!\t\t\t\t";
// 	sortie = ft_substr(tab, 4, 6);
// 	printf("%s", sortie);
// 	free(sortie);
// 	return (0);
// }
