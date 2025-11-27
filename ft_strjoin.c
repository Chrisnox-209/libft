/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 03:48:39 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:43:45 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	size_t	i;
	size_t	j;
	char	*joint;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	joint = malloc((size_s1 + size_s2) * sizeof(char) + 1);
	if (!joint)
		return (NULL);
	i = 0;
	while (size_s1-- > 0)
	{
		joint[i] = s1[i];
		i++;
	}
	j = 0;
	while (size_s2-- > 0)
		joint[i++] = s2[j++];
	joint[i] = '\0';
	return (joint);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *tab = ft_strjoin("Hello ", "World");
// 	printf("%s", tab);
// 	free(tab);

// 	return (0);
// }
