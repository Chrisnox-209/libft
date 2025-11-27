/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:33:32 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/10 14:56:53 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char noascii = 'ç';
// 	printf("%d", ft_isascii('a'));
// 	printf("\n");
// 	printf("%d", ft_isascii(noascii));
// 	return (0);
// }
