/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:33:25 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/20 18:19:47 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("\n");
// 	printf("%d\n", isalpha('a'));
// 	return (0);
// }
