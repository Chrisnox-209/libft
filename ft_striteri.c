/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:57:30 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:44:03 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	ft_test(unsigned int idx, char *c)
// {
// 	int	nb;

// 	nb = *c - idx;
// 	if (nb >= 32 && nb <= 126)
// 		ft_putchar_fd(nb, 1);
// 	else
// 		ft_putchar_fd(42, 1);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char *tab = "Tfuw$Qk'Jx|oqy.01";
// 	ft_striteri(tab, &ft_test);

// 	// char	*c = "B";
// 	// ft_test(1, c);

// 	return (0);
// }