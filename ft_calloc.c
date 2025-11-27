/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:31:05 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:48:58 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*tab;

	if (nmemb && size > __SIZE_MAX__ / nmemb)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

// int	main(void)
// {
// 	int		*tab;
// 	size_t	nmemb;

// 	nmemb = 5;
// 	tab = ft_calloc(nmemb, sizeof(int));

// 	if (!tab)
// 		return (0);
// 	free(tab);
// 	return (0);
// }
