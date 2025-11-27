/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:35:37 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:58:08 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	ft_test(unsigned int idx, char c)
// {
// 	int	nb;

// 	nb = c - idx;
// 	if (nb >= 32 && nb <= 126)
// 		c = c - idx;
// 	else
// 		c = 42;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			size;

	i = 0;
	size = ft_strlen(s);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (!f)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const *tab = "Tfuw$Qk'Jx|oqy.01";

// 	char *sortie;

// 	sortie = ft_strmapi(tab, &ft_test);
// 	printf("%s", sortie);

// 	// printf("%c", ft_test(5, '!'));
// 	return (0);
// }