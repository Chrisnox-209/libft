/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:14:03 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/20 16:46:57 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	dup = malloc(sizeof(char) * (j + 1));
	if (!dup)
		return (NULL);
	while (i < j)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab;

// 	tab = "test le truc !";
// 	printf("%s", ft_strdup(tab));
// 	return (0);
// }
