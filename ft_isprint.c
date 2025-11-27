/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:33:44 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/10 17:30:02 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char noascii = 'ç';
// 	printf("%d", ft_isprint('a'));
// 	printf("\n");
// 	printf("%d", ft_isprint(noascii));
// 	return (0);
// }
