/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:25:13 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/20 19:17:59 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && n == 0)
		return (NULL);
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (i + j < n && str[i + j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	str[13] = "CCCCCharlie ?";
// 	char	to_find[9] = "CCharlie";

// 	printf("%s", strnstr(NULL, "sa", 0));
// 	printf("\n\n");

// 	//printf("%s", strnstr(str, to_find, 11));
// 	return(0);

// }
